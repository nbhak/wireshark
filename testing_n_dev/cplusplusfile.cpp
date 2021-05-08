#include "bridgeheader.h"

// API_example in this case is a wrapper for a lambda function, which btw isn't supported in C!
void API_example(int* i) {
   auto func = [i](){
    (*i) *= 10;
   };
   func();
}
