# Assignment 10: Sequential containers part two
Welcome to the deque-Based Sequential Containers project! This project focuses on utilizing deque as the primary sequential containers within the Standard Template Library (STL). The project follows guidelines that encourage the use of STL algorithms, lambda functions, and the avoidance of explicit loops (for, while, do/while) or recursion.

## Project Overview
### Objective
* The main objective of this project is to explore and demonstrate the effective use of deque in a variety of scenarios. 
* Deque are dynamic data structures that allow efficient insertion and removal of elements at any position, making them suitable for certain types of operations compared to other sequential containers.

## Example Usage
I have used deque container in the entire project in place of vector.
```
#pragma once
#include <deque>
#include "Triangle.h"
//class for bounding box around and object
class BBox
{
public:
    //constructor
    BBox(std::deque<Triangle> triangles);
    //destructor
    ~BBox();


private:
    //calculate bounding box function iwth parametersas list of triangles
    void calculateBBox(std::deque<Triangle> triangles);
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

