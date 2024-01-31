#ifndef __CONSOLE_H__
#define __CONSOLE_H__

#include <string>

#ifdef _MSC_VER
#   include <windows.h>
#   define _CRT_SECURE_NO_WARNINGS
#   define sleep(x) Sleep(x*1000)
#else
#   include <unistd.h>
#endif

#ifndef _MSC_VER
//translations from Windows colors
//order:                                black, blue, green, cyan, red, magenta, yellow, white, gray, lblue, lgreen, lcyan, lred, lmagenta, lyellow, bwhite
const unsigned char CONS_COLORS_FG[] = {   30,   34,    32,   36,  31,      35,     33,    37,   90,    94,     92,    94,   91,       95,      93,     97};
const unsigned char CONS_COLORS_BG[] = {   49,   44,    42,   46,  41,      45,     43,    47,  100,   104,    102,   106,  101,      105,     103,    107};
#endif

inline int set_text_color(unsigned char foreground, unsigned char  background=0){
        if(background >= 16 || foreground >= 16){
            return -1;
        }
#ifdef _MSC_VER
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        if(hConsole == NULL){
            return -2;
        }
        SetConsoleTextAttribute(hConsole, foreground+(background<<4));
#else
        if(!isatty(fileno(stdout))) return 0;
        printf("\e[%d;%dm", CONS_COLORS_FG[foreground], CONS_COLORS_BG[background]);
#endif
        return 0;
}

inline int reset_text_color(){
#ifdef _MSC_VER
        set_text_color(7,0);
#else
        if(!isatty(fileno(stdout))) return 0;
        printf("\e[0m");
#endif
        return 0;
}

#endif // __CONSOLE_H__