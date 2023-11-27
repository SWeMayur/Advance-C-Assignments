# Assignment 5 - Lambda Expression for updating the minimum and maximum point from triangulation #
## Overview ##
* This assignment involves utilizing a lambda expression in the /src/BBox.cpp file to define a function named updateIfGreater updateIfSmaller. The lamdba expression used to get maximum and minimum point from triangulation which are furthur used to draw bounding box of geometry.

## Updated Function Definition ##
Function File:
* Function Definition: /src/BBox.cpp *

## Lambda Expression: ##

Define a lambda expression named updateIfGreater and updateIfSmaller which takes two parameters of Point3D objects. The first one updates the maximum point to get maximum point from triangulation and second one updates the minimum point.

## Lambda Expression in Action: ##

Call the lambda expression updateIfGreater and updateIfSmaller in the compareAndUpdate function in BBox.cpp file.

## Function implementation ## 

     //lambda function for updating maximum value
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
