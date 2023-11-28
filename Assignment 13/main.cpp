#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{   //vector of triangles to store all points in the form of triangles.
    std::vector<Triangle> triangles;
    //call getTriangles function to fill the vector of triangles
    Reader reader("resources\\cubeModel.stl");
    reader.getTriangles(triangles);
    //create triangulation of all triangles
    Triangulation triangulation(triangles);
    //create object of writer
    Writer writer;
    //store output triangles by calling get triagnles function
    std::vector<Triangle> outTriangles=triangulation.getTriangles();
    //write the data in output.txt file
    writer.write("output\\output.txt", outTriangles);
    //get perimeter of 10th triangle in triangulation:
    triangulation.getPerimeterOfAnyTriangle(10);
    std::cout<<"Press enter to exit\n";
    std::cin.ignore();
    std::cin.get();
}