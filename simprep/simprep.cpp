#include <iostream>
#include <sstream>
#include <cstdio>
#include <fstream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

void printInfo() {
    cout << "Simprep - A simple text preprocessor" << endl << endl;
    cout << "Usage: simprep [INPUT FILENAME] -i [TAG] -e [TAG]" << endl << endl;
    cout << "Flags: " << endl;
    cout << " -i: Include tags. Includes all text between <TAG> and </TAG>." << endl;
    cout << " -e: Exclude tags. Excludes all text between <TAG> and </TAG>." << endl;
    cout << "    If you want to use multiple tags separate them by a space and use quotation marks." << endl;
}

string readFlag(char flag, int argc, char **argv) {
    for (int i = 2; i < (argc - 1); i++) {
        char *arg = argv[i];

        char *fullFlag = new char[4];
        snprintf(fullFlag, 4, "-%c", flag);
        if (strcmp(arg, fullFlag) == 0) {
            return string(argv[i+1]);
        }
    }
    return "";
}

vector<string> splitString(string& input, char delimiter) {
    istringstream stream(input);
    vector<string> tokens;
    string token;
    
    while (getline(stream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

std::string replace_all(
    const std::string & str ,   // where to work
    const std::string & find ,  // substitute 'find'
    const std::string & replace //      by 'replace'
) {
    string result;
    size_t find_len = find.size();
    size_t pos,from=0;
    while ( string::npos != ( pos=str.find(find,from) ) ) {
        result.append( str, from, pos-from );
        result.append( replace );
        from = pos + find_len;
    }
    result.append( str, from , string::npos );
    return result;
}


bool isExcluded = false;
string activeExclusionToken = "";

std::string erase_all(
    const std::string & str ,   // where to work
    const std::string & start , // start tag
    const std::string & finish  // finish tag 
    // all text in between start and finish tags is removed. inclusive.
) {

    string result;
    size_t pos,from=0;
    while ( string::npos != ( pos=str.find(start, from) ) ) {
        result.append( str, from, pos-from );
        from = pos + start.size();

        pos = str.find(finish, from);
        if (pos == string::npos) {
            return result;
        } 
        from = pos + finish.size();
    }
    result.append( str, from , string::npos );
    return result;
}

std::string trim(std::string s) {	
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());

    return s;
}

void parseLine(std::string line, vector<string>inclusionTokens, vector<string>exclusionTokens) {

    std::string l = line;
    std::string l_trimmed = trim(l);

    for (const string& inclusionToken : inclusionTokens) {
        string tag_open = "<" + inclusionToken + ">";
        string tag_close = "</" + inclusionToken + ">";

        if (l_trimmed.compare(tag_open) == 0) { return; }
        if (l_trimmed.compare(tag_close) == 0) { return; }
        
        l = replace_all(l, tag_open, "");
        l = replace_all(l, tag_close, "");
    }
    for (const string& exclusionToken : exclusionTokens) {
        string tag_open = "<" + exclusionToken + ">";
        string tag_close = "</" + exclusionToken + ">";

        if (l_trimmed.compare(tag_open) == 0) { 
            isExcluded = true;
            activeExclusionToken = exclusionToken;
            return; 
        }
        if (l_trimmed.compare(tag_close) == 0) {
            isExcluded = false;
            activeExclusionToken = "";
           return; 
        }

        l = erase_all(l, tag_open, tag_close);
    }

    if (!isExcluded) {
       std::cout << l << endl;
    }
}

int parseFile(const char* filename, vector<string>inclusionTokens, vector<string>exclusionTokens) {
   std::ifstream input(filename);
   if (input.fail()) { return 1; }

   for (std::string line; getline(input, line); ) {
        parseLine(line, inclusionTokens, exclusionTokens);
   }
   return 0;
}


void printPossibleError(int code) {
    if (code == 0) { return; }
    if (code == 1) {
       cout << "Error: Input file not found " << endl;
    } else {
        cout << "Unknown error: " << code << endl;
    }
}

int main(int argc, char **argv) {
    
    if (argc < 2) {
       printInfo();
       return 0;
    }
    char *filename = argv[1];
 
    string inclusionFlag = readFlag('i', argc, argv);
    string exclusionFlag = readFlag('e', argc, argv);

    vector<string> inclusionTokens = splitString(inclusionFlag, ' ');
    vector<string> exclusionTokens = splitString(exclusionFlag, ' ');

/*
    for (const string& inclusionToken : inclusionTokens) {
        cout << "INCLUSION TOKEN: " << inclusionToken << endl;
    }

    for (const string& exclusionToken : exclusionTokens) {
        cout << "EXCLUSION TOKEN: " << exclusionToken << endl;
    }
  */

    int result = parseFile(filename, inclusionTokens, exclusionTokens);
    
    printPossibleError(result);
    return result;
}
