#include<stdio.h>

int main()
{
  #ifdef __linux__
    printf("Currently running Linux\n");
  #elif _WIN32_
    printf("Currently running Windows");
    
    #ifdef _WIN64
      printf(" 64 bit\n");
    #else
      printf(" 32 bit\n");
    #endif

  #elif __APPLE__
    #include "TargetConditionals.h"
    #if TARGET_OS_MAC
      printf("Mac OS\n");
    #endif
  #endif

  return 0;

}

/* 
Simple OS-detect script 
src = https://iq.opengenus.org/detect-operating-system-in-c/#:~:text=To%20check%20the%20operating%20system,defined%2C%20we%20are%20on%20Windows.
*/