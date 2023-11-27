# Assignment 7 - Generalized capture with initialization #
## Overview ## 
* This assignment involves utilizing a lambda expression in the /src/BBox.cpp file to calculate the center point of a gemoetry using maximum and minimum point of a geometry.
* This can be done using lambda function
## Updated Function Definition ##
### Function File: ###
* Function Definition: /src/BBox.cpp
* funtion: void BBox::calculateBBox(std::vector<Triangle> triangles)
* 
## Lambda Expression: ##
* Define a lambda expression inside the function named calculateCenter which calculates the center point of a geometry using max and min point.
* It takes input as one point and return a center point.
* The center point then stored in mCenter member variable.

## Code snippet ##

   ``` //calculate center point of the geometry using lambda function
   Point3D getCenter(0,0,0);
   auto calculateCenter = [getCenter = Point3D((mMin.x()+mMax.x())/2, (mMin.y()+mMax.y())/2, (mMin.z()+mMax.z())/2)] (Point3D p){return getCenter;};
   mCenter = calculateCenter(getCenter); 





