#pragma once
//Point3D class
class Point3D
{
public:
    //Arged constructor with 3 points which represents a point in 3D space
    Point3D(double inX, double inY, double inZ);
    ~Point3D();

    //getter functions for getting values of x, y and z coordinates
    double x();
    double y();
    double z();
    
    //setter functions for updating values of x, y and z coordinates
    void setX(double x);
    void setY(double y);
    void setZ(double z);

private:
    //private member variables to store X,Y and Z coordinates of a Point in 3D space
    double mX;
    double mY;
    double mZ;
};