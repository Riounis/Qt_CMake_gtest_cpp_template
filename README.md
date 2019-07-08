BUILD INSTRUCTIONS:
Windows:
1) In root directory, run
cmake .
2) msbuild Lib.sln
3) Navigate to ui director
4) Run uic -o ui_mainwindow.h mainwindow.ui
5) Run qmake -project
6) Edit the .pro file to add:
   QT += core gui widgets
7) Run qmake ui.pro
8) Run nmake release

Linux:
