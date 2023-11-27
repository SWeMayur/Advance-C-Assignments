#pragma once
#include <vector>
#include "Triangle.h"
#include "BBox.h"

//Triangulation class
class Triangulation
{

public:
    //Triangulation constructor (arged) with parameter as vector of triangles
    Triangulation(std::vector<Triangle> triangles);
    ~Triangulation();

    //getTriangles function to get each triangle
    std::vector<Triangle> getTriangles();

private:
    //member variables triangles and bounding box of an objects
    std::vector<Triangle> mTriangles;
    BBox mBBox;
};
