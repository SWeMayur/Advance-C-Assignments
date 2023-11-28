#pragma once
#include<vector>
#include<string>
#include "Triangle.h"

//writer class to write the data
class Writer
{
public:
    //constructor
    Writer();
    ~Writer();

    //write method which takes filepath and vector of triangles and write the data from vector and store in given filepath
    void write(std::string filePath ,std::vector<Triangle>& triangles);

};