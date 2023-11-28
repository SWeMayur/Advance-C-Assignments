#pragma once
#include <string>

class IOCloser
{
    public:
        IOCloser();
        ~IOCloser();
        virtual void closeFile(std::string filePath);
};