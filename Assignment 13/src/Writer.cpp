#include<fstream>
#include "../headers/Writer.h"
#include "../headers/FileNotFoundErr.h"

Writer::Writer(/* args */)
{
}

Writer::~Writer()
{
}
void Writer::closeFile(std::string filePath){
    std::ofstream datafile;
    datafile.open(filePath);
    if(!datafile.is_open()){
      fileNotFoundError();
      return;
    }
    datafile.close();
}
void Writer::write(std::string filePath ,std::vector<Triangle>& triangles)
{
  std::ofstream dataFile;
  dataFile.open(filePath);
  
  for (Triangle triangle:triangles)
  {
      dataFile << triangle.p1().x() << " " << triangle.p1().y() << " "<< triangle.p1().z() << std::endl;
      dataFile << triangle.p2().x() << " " << triangle.p2().y() << " "<< triangle.p2().z() << std::endl;
      dataFile << triangle.p3().x() << " " << triangle.p3().y() << " "<< triangle.p3().z() << std::endl;
      dataFile << triangle.p1().x() << " " << triangle.p1().y() << " "<< triangle.p1().z() << std::endl;
  }
  closeFile(filePath);
};