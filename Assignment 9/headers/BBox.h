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