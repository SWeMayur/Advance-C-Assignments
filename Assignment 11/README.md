# Assignment 11 - map container implementation #
## Overview ## 
* This assignment shows the implementation of map container.
* A map container is a data structure in c++ standard template library which stores data in key value pair.
* 
## Function Definition ##
* * In the code (src/Triangulation.cpp) file, I have created one function called as `getPerimeterOfAnyTriangle` which takes index as an input of triangle and prints its area.
* * Here, the triangle index represents a key and its perimeter represents a value.
### Function File: ###
* src/Triangulation.cpp
* header/Triangulation.h
* main.cpp 
## Code snippet ##
```
void Triangulation::getPerimeterOfAnyTriangle(int index){
     std::map<int, double> areas;
     int ind = 0;
    for(Triangle triangle: mTriangles){
        double side1 = sqrt(((triangle.p2().x() - triangle.p1().x()) * (triangle.p2().x() - triangle.p1().x())) + ((triangle.p2().y() - triangle.p1().y()) * (triangle.p2().y() - triangle.p1().y())) + ((triangle.p2().z() - triangle.p1().z()) * (triangle.p2().z() - triangle.p1().z())));
        double side2 = sqrt(((triangle.p3().x() - triangle.p2().x()) * (triangle.p3().x() - triangle.p2().x())) + ((triangle.p3().y() - triangle.p2().y()) * (triangle.p3().y() - triangle.p2().y())) + ((triangle.p3().z() - triangle.p2().z()) * (triangle.p3().z() - triangle.p2().z())));
        double side3 = sqrt(((triangle.p3().x() - triangle.p1().x()) * (triangle.p3().x() - triangle.p1().x())) + ((triangle.p3().y() - triangle.p1().y()) * (triangle.p3().y() - triangle.p1().y())) + ((triangle.p3().z() - triangle.p1().z()) * (triangle.p3().z() - triangle.p1().z())));
        areas[ind] = side1+side2+side3;
        ind++;
    }
    if(index >= ind) {
        std::cout << "Triangle index out of bound!" << std::endl;
        return;
    }
     std::cout << "area = " << areas[index] << std::endl;
}
```




