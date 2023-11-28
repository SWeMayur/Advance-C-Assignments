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