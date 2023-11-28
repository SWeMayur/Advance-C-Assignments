# Assignment 9: Sequential containers part one
Welcome to the List-Based Sequential Containers project! This project focuses on utilizing lists as the primary sequential containers within the Standard Template Library (STL). The project follows guidelines that encourage the use of STL algorithms, lambda functions, and the avoidance of explicit loops (for, while, do/while) or recursion.

## Project Overview
### Objective
* The main objective of this project is to explore and demonstrate the effective use of lists in a variety of scenarios. 
* Lists are dynamic data structures that allow efficient insertion and removal of elements at any position, making them suitable for certain types of operations compared to other sequential containers.

## Example Usage
I have used list container in the entire project in place of vector.
```
#pragma once
#include <list>
#include "Triangle.h"
//class for bounding box around and object
class BBox
{
public:
    //constructor
    BBox(std::list<Triangle> triangles);
    //destructor
    ~BBox();


private:
    //calculate bounding box function iwth parametersas list of triangles
    void calculateBBox(std::list<Triangle> triangles);
    //compare and update function with parameters as 3 Point3D points
    void compareAndUpdate(Point3D refP, Point3D& min, Point3D& max);

private:
    //Point mMin denotes minimum point in an object 
    Point3D mMin;
    //Point mMax denotes maximum point in an object 
    Point3D mMax;
    //Point mMin denotes center point in an object 
    Point3D mCenter;
};
```
