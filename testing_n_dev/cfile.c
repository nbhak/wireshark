// File: cfile.c
// Example "C" code

#include <stdio.h>
#include <stdlib.h>

// include the header file that has the wrapper APIs
#include "bridgeheader.h"

int main() {
   int num = 42;
   printf("inital value is : %d\n", num);
   API_example(&num);
   printf("final value is: %d\n", num);
   return 0;
}

