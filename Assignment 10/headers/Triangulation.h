#pragma once
#include <deque>
#include "Triangle.h"
#include "BBox.h"

//Triangulation class
class Triangulation
{

public:
    //Triangulation constructor (arged) with parameter as deque of triangles
    Triangulation(std::deque<Triangle> triangles);
    ~Triangulation();

    //getTriangles function to get each triangle
    std::deque<Triangle> getTriangles();

private:
    //member variables triangles and bounding box of an objects
    std::deque<Triangle> mTriangles;
    BBox mBBox;
};
