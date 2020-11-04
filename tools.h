#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED
#include<windows.h>
#include <iostream>
#include <string.h>
#include<stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <sstream>
#include <bits/stdc++.h>
#include <time.h>
#include <math.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
time_t current = time(0);
class easy_T
{


public:
   int h,m,mm;

    easy_T() {}
    ~easy_T() {}
    void Clear_windows()
    {
        system("cls");
    }

    void getLaikasSO()
    {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        h=( ltm->tm_hour);
        m=( ltm->tm_min );
        mm=( ltm->tm_sec);
    }
    int getGH(){return h;}
};


#endif // TOOLS_H_INCLUDED
