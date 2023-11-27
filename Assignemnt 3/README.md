
# Assignment 3: File workshop part one #
## Overview ##
* This program reads data from a file named languages.txt and populates a vector of language objects based on the provided type definition. It then prints out the data in a specific format.

## Instructions ##
* Clone Repository: git clone <repository-url>

## Compile the Program: ##

g++ main.cpp -o language_processor

## Run the Program: ##
./language_processor
## Output: ##
The program reads the data from languages.txt, processes it, and prints the results.

## Example Output ##
C++, Stroustrup, 1979
Java, Gosling, 1991

## Code Structure ##
* header folder 
     * BBox.h 
     * Geometry.h 
     * Point3d.h 
     * Reader.h 
     * Triangle.h 
     * Triangulation.h 
     * Typedef.h
     * Triangle.h
* src folder 
     * BBox.cpp 
     * Geometry.cpp 
     * Point3d.cpp 
     * Reader.cpp 
     * Triangle.cpp 
     * Triangulation.cpp 
     * Typedef.cpp 
     * Triangle.cpp 
* main.cpp: Main program file containing the implementation. 
* languages.txt: Input file containing language data. 
# Implementation Details #
The program reads each line from languages.txt, extracts relevant information, creates a language object, and adds it to a vector. Finally, it prints the data in the specified format.

Dependencies
* C++ compiler (e.g., g++) *
