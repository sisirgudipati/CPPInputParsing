========================================================================
    CONSOLE APPLICATION : Lab1 Project Overview
========================================================================

AppWizard has created this Lab1 application for you.

This file contains a summary of what you will find in each of the files that
make up your Lab1 application.


Lab1.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

Lab1.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

Lab1.cpp
    This is the main application source file.

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named Lab1.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
Lab1: Sisir Gudipati 
1).Errors: Ran into unsigned integer error regarding iterating through C-style strings. 
2). Test cases: I created a test.txt file that contained a couple of cases separated by empty lines and blank spaces. One test case
I was particularly interested in was if an integer had leading zeroes. I found that when I input for example '0056', the output would spit out
'56', trimming the leading zeroes. This is due to my stoi function that doesn't recognize leading zeroes as part of an integer. I posted on piazza
and an instructor confirmed that it would be alright to trim the leading zeroes as long as I mentioned it in my ReadMe. 
Test cases: 
34h 00560009 asdl;

\\slk ]asl rhee

okayyyyy 3
69 


5	
Output: 
Strings: 34h
Strings: asdl;
Strings: \\slk
Strings: ]asl
Strings: rhee
Strings: okayyyyy
Strings: ]
Numbers: 560009
Numbers: 3
Numbers: 69
Numbers: 5

As you can see, my test cases all were recognized correctly as a String or only integers. The output with prefix Numbers: is what was 
placed into my final vector<int> after the isdigit checks. 

Extra Credit: 
[sisir.gudipati@shell ~]$ 
Strings: these
Strings: all
Strings: are
Strings: strings
Strings: 7string
Strings: str4ing
Strings: string2
Strings: more
Strings: strings
Numbers: 0
Numbers: 1
Numbers: 2
Numbers: 3
Numbers: 5
Numbers: 7
Numbers: 11
Numbers: 13
Numbers: 17
Numbers: 19

