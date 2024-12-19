Source files of the manual of Topo GPS
=======================================
These are the source files of the universal manual for the outdoor navigation app Topo GPS.

The Apple version of the manual can be viewed on https://www.topo-gps.com/ios/en/manual/html/
The Android version of the manual can be viewed on https://www.topo-gps.com/android/en/manual/html/

Android / iOS-MacOS
-------------------
The source files of the manual are universal. The manual generator makes a special version of the manual for Android and Apple.
To add text specific to the Android or the Apple platform, surround text with <ANDROID> </ANDROID> or <APPLE> </APPLE>.
The tags should be preferably on a separate line, separate from the rest of the text. Like::

  <APPLE>
  Here is text specific for Apple devices.  
  </APPLE>  
  <ANDROID>
  And this is only valid in Android.  
  </ANDROID>
  But this is valid for all devices.

It is however possible to put both the opening tag and the closing tag on a single line.

Updating the manual
-------------------
Manuals should be generated on the main Topo GPS server.

reStructuredText
----------------
The manual is written in `reStructuredText (rst) <http://docutils.sourceforge.net/rst.html>`_.
A short introduction into reStructuredText can be found here: http://www.sphinx-doc.org/en/stable/rest.html

The document processor Sphinx adds several `markup constructs <http://www.sphinx-doc.org/en/stable/markup/index.html>`_ to reStructuredText which also can be used in the manual.
