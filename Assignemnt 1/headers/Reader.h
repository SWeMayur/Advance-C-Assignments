#pragma once
#include <vector>
#include <string>
#include "Triangle.h"

//Reader class to read the file given by user
class Reader {
public:
    //string arged constructor which takes filepath as string variable
    Reader(std::string filePath);
    ~Reader();
    //member function getTriangles with one argument as vector of triangles
    void getTriangles(std::vector<Triangle>& triangles);

private:
    //string member variable to store filepath given by user
    std::string mFilePath;
};