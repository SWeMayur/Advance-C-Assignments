#include<iostream>
#include<cfloat>
#include "../headers/BBox.h"
#include "../headers/Triangle.h"
#include "../headers/Point3D.h"

//implementation of bounding box class
BBox::BBox(std::vector<Triangle> triangles)
:mMin(0,0,0), //initializer list for member variables
mMax(0,0,0),
mCenter(0,0,0)
{   //call the calculateBBox function
    calculateBBox(triangles);
}

BBox::~BBox()
{
}
//function foe calculating bounding box of an object
void BBox::calculateBBox(std::vector<Triangle> triangles)
{
   //assign maximum point with minimum values of double so that we can compare it to get maximum point value
   mMax = Point3D(__DBL_MIN__,__DBL_MIN__,__DBL_MIN__);
   //assign minimum point with maximum values of double so that we can compare it to get minimum point value
   mMin = Point3D(__DBL_MAX__,__DBL_MAX__,__DBL_MAX__);

    //iterate through each triangle
   for(Triangle triangle:triangles)
   {
      Point3D p1=triangle.p1();
      Point3D p2=triangle.p2();
      Point3D p3=triangle.p3();

      compareAndUpdate(p1, mMin, mMax);
      compareAndUpdate(p2, mMin, mMax);
      compareAndUpdate(p3, mMin, mMax);
   }
   //calculate center point of the geometry
   mCenter = Point3D((mMin.x()+mMax.x())/2, (mMin.y()+mMax.y())/2, (mMin.z()+mMax.z())/2);
   std::cout<<mMin.x()<<" "<<mMin.y()<<" "<<mMin.z()<<std::endl;
   std::cout<<mMax.x()<<" "<<mMax.y()<<" "<<mMax.z()<<std::endl;
   std::cout<<mCenter.x()<<" "<<mCenter.y()<<" "<<mCenter.z()<<std::endl;
}
//compare function to compare the current point with the minimum and maximum points
void BBox::compareAndUpdate(Point3D pointToCompare, Point3D& min, Point3D& max)
{    //lambda function for updating maximum value
     auto updateIfGreater = [](Point3D pointToCompare, Point3D& max) {
        if(pointToCompare.x()>max.x())
          max.setX(pointToCompare.x());

        if(pointToCompare.y()>max.y())
          max.setY(pointToCompare.y());

        if(pointToCompare.z()>max.z())
          max.setZ(pointToCompare.z());
    };
    //lambda function for updating minimum value
    auto updateIfSmaller = [](Point3D pointToCompare, Point3D& min) {
        if(pointToCompare.x()<min.x())
          min.setX(pointToCompare.x());

      if(pointToCompare.y()<min.y())
          min.setY(pointToCompare.y());

      if(pointToCompare.z()<min.z())
          min.setZ(pointToCompare.z());
    };

    // Update max values using lambda functions
    updateIfGreater(pointToCompare, max);
    updateIfGreater(pointToCompare, max);
    updateIfGreater(pointToCompare, max);

    // Update min values using lambda functions
    updateIfSmaller(pointToCompare, min);
    updateIfSmaller(pointToCompare, min);
    updateIfSmaller(pointToCompare, min);
}

