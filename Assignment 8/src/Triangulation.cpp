#include <map>
#include <math.h>
#include <iostream>
#include "../headers/Triangulation.h"
#include "../headers/Triangle.h"


Triangulation::Triangulation(std::vector<Triangle> triangles)
:mBBox(triangles)
{
    mTriangles=triangles;
}

Triangulation::~Triangulation()
{
}

std::vector<Triangle> Triangulation::getTriangles(){
    return mTriangles;
}
//function to return a map of triangle and its perimeter
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
