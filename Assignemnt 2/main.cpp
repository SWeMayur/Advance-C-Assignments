#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{   //vector of triangles to store all points in the form of triangles.
    std::vector<Triangle> triangles;
    //Read the stl file from a specified path
    Reader reader("resources/cubeModel.stl");
    //call getTriangles function to fill the vector of triangles
    reader.getTriangles(triangles);
    //create triangulation of all triangles
    Triangulation triangulation(triangles);
    //create object of writer
    Writer writer;
    //store output triangles by calling get triagnles function 
    std::vector<Triangle> outTriangles = triangulation.getTriangles();
    //write the data in output.txt file
    writer.write("output/output.txt", outTriangles);

    std::cout<<"Press enter to exit";
    std::cin.ignore();
    std::cin.get();
}