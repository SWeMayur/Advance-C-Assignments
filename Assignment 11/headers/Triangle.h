#pragma once
#include "Point3D.h"

//Triangle class 
class Triangle
{
public:
    //Arged constructor with 3 parameters of 3 Point3D object which represents a triangle
    Triangle(Point3D p1, Point3D p2, Point3D p3);
    ~Triangle();

    //Getter functions to get 3 points of a triangle
    Point3D p1();
    Point3D p2();
    Point3D p3();
private:
    //member variables to store 3 points of a triangle
    Point3D mP1;
    Point3D mP2;
    Point3D mP3;
};