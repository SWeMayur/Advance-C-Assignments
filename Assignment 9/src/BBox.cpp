#include<iostream>
#include<algorithm>
#include "../headers/BBox.h"
#include "../headers/Triangle.h"
#include "../headers/Point3D.h"

BBox::BBox(std::list<Triangle> triangles)
:mMin(0,0,0),
mMax(0,0,0),
mCenter(0,0,0)
{
    calculateBBox(triangles);
}

BBox::~BBox()
{
}

void BBox::calculateBBox(std::list<Triangle> triangles)
{

   mMax = Point3D(__DBL_MIN__,__DBL_MIN__,__DBL_MIN__);
   mMin = Point3D(__DBL_MAX__,__DBL_MAX__,__DBL_MAX__);

    //forEach function with lambda expression to get each point from a triangle and update mMax and mMin variables in it.
   std::for_each(triangles.begin(), triangles.end(), [&](Triangle triangle) {
        std::list<Point3D> points = {triangle.p1(), triangle.p2(), triangle.p3()};
        std::for_each(points.begin(), points.end(), [&](Point3D point) {
            compareAndUpdate(point, mMin, mMax);
        });
    });

   Point3D getCenter(0,0,0);
   auto calculateCenter = [getCenter = Point3D((mMin.x()+mMax.x())/2, (mMin.y()+mMax.y())/2, (mMin.z()+mMax.z())/2)] (Point3D p){return getCenter;};
   mCenter = calculateCenter(getCenter);
   std::cout<<mMin.x()<<" "<<mMin.y()<<" "<<mMin.z()<<std::endl;
   std::cout<<mMax.x()<<" "<<mMax.y()<<" "<<mMax.z()<<std::endl;
   std::cout<<mCenter.x()<<" "<<mCenter.y()<<" "<<mCenter.z()<<std::endl;
}

void BBox::compareAndUpdate(Point3D pointToCompare, Point3D& min, Point3D& max)
{
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
    // Update min values using lambda functions
    updateIfSmaller(pointToCompare, min);
}
