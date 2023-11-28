#include<iostream>
#include<deque>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{   //vector of triangles to store all points in the form of triangles.
    std::deque<Triangle> triangles;
    //call getTriangles function to fill the vector of triangles
    Reader reader("resources\\cubeModel.stl");
    reader.getTriangles(triangles);
    //create triangulation of all triangles
    Triangulation triangulation(triangles);
    //create object of writer
    Writer writer;
    //store output triangles by calling get triagnles function
    std::deque<Triangle> outTriangles=triangulation.getTriangles();
    //write the data in output.txt file
    writer.write("output\\output.txt", outTriangles);

    std::cout<<"Press enter to exit\n";
    std::cin.ignore();
    std::cin.get();
}