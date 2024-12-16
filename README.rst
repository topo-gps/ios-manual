Source files of the manual of Topo GPS
=======================================
The iOS version of the manual can be viewed on https://www.topo-gps.com/ios/en/manual/html/
The Android version of the manual can be viewd https://www.topo-gps.com/android/en/manual/html/


Android / iOS-MacOS
-------------------
The source files of the manual are universal. The manual generator makes a special version for Android and Apple OS.
To add text specific for the Android or the Apple platform, surround text with <ANDROID> </ANDROID> or <APPLE> </APPLE>.


Updating the manual
-------------------
Manuals should be generated on the main Topo GPS server.

reStructuredText
----------------
The manual is written in `reStructuredText (rst) <http://docutils.sourceforge.net/rst.html>`_.
A short introduction into reStructuredText can be found here: http://www.sphinx-doc.org/en/stable/rest.html

The document processor Sphinx adds several `markup constructs <http://www.sphinx-doc.org/en/stable/markup/index.html>`_ to reStructuredText which also can be used in the manual.
