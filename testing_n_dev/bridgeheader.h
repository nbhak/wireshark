// File: bridgeheader.h
// Example header. Your API wrappers go here!

// Seperate C and C++ compilation
// There is probably a better fix to do this but this will have to do
#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif

EXTERN void API_example(int* i); // pure wrapper that works in both C and C++
