The purpose of this project is to provide a template for projects which use a homebuilt c++ static library with a gui in a desktop application.

BUILD INSTRUCTIONS:
Windows:
1) In root directory, run
cmake .
2) msbuild Lib.sln
3) Navigate to ui directory
4) Run uic -o ui_mainwindow.h mainwindow.ui
5) Run qmake -project
6) Edit the .pro file to add:
   QT += core gui widgets
7) Run qmake ui.pro
8) Run nmake release

Linux:
1) In the root directory, run
cmake .
2) make
3) Navigate to the ui directory
4) Run uic -o ui_mainwindow.h mainwindow.ui
5) Run qmake -project
6) Edit the .pro file to add:
   QT += core gui widgets
7) Run qmake ui.pro
8) Run make
