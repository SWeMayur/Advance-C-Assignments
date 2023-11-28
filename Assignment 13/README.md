# Assignment 13: Interfacing to C
In this assignment, we can implement the C function in c++ projecet using `extern` keyword to get benefit of faster execution of C programmng.

## Implementation of `FileNotFound` function in C and its use in c++
```
#pragma once

#ifdef __cplusplus
extern "C"
{
    #include <stdio.h>
    void fileNotFoundError();
}

#else
#include <stdio.h>
void fileNotFoundError();

#endif
```
## CPP 
#include "../headers/FileNotFoundErr.h"
```
void fileNotFoundError()
{
    printf("File not found !!!");
}
```
## Implementation class:
`Reader` class, 
`Writer` class
