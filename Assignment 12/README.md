# Assignment 12 - Virtual Functions
## Overview
* Virtual functions are important part of object oriented programming.
* Virtual functions are used to achieve polymorphism.
* We need to declare virtual functions in parent class and must need to override and implement them in the child class.

## Implementation:
* Here in file I/O operations in Reader and Writer classes, we need to open/close the reader and writer from fstream.
* So, I have created one class of IOClose which can close the file after completing its reading or writing.

## Code snippet:
```
void Reader::closeFile(std::string filePath){
    std::ifstream datafile;
    datafile.open(filePath);
    datafile.close();
}
```
## Virtual Function:
```
virtual void closeFile(std::string filePath);
```
