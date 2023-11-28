#pragma once
#include<vector>
#include<string>
#include "Triangle.h"
#include "IOCloser.h"
class Writer : public IOCloser
{
public:
    Writer();
    ~Writer();

    void write(std::string filePath ,std::vector<Triangle>& triangles);
    virtual void closeFile(std::string);
};