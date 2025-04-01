#include <iostream>
#include <vector>
#include "elements.h"
#include "fileReader.h"

int main()
{
    std::string sdfile = "objFiles/snubDisphenoid.obj"; 
    obj snubDisphenoid = objRead(sdfile); 
    
    //debugging purposes
    /*
    std::cout << "vertices" << std::endl;
    for (const vertex& v : snubDisphenoid.vertices)
    {
        std::cout << v.x << "," << v.y << "," << v.y << std::endl; 
    }

    std::cout << "faces" << std::endl; 
    for (const face& f : snubDisphenoid.faces)
    {
        std::cout << f.v1 << "," <<  f.v2 << "," << f.v3 << std::endl; 
    } */
    
    return 0;
}; 