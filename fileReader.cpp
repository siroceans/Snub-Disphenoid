#include <iostream> 
#include <vector> 
#include <fstream>
#include "elements.h"
#include <sstream>

obj objRead(const std::string& filename) 
{ //function that reads a .obj file!!
    obj object;  //creting the actual obj (structure) 

    std::ifstream file(filename); //instatiating the file into variable named "file"
    std::string lines; //creating line variable. (string)

    while(getline(file, lines)) //while the thing keeps getting lines from the file...
    {
        std::string type; //initializing type variable to know if the line is either a vertex or face. 
        std::istringstream linestream(lines); 
        linestream >> type; //getting the first word of the .obj line
        if (type == "v") //if the line is giving the points of a vertex...
        {
            float x, y, z; //Initializing variables for the thingy. 
            linestream >> x >> y >> z; //assigning values of x, y, z.
            vertex vertexi(x, y, z); //Assinging to vertex data type!
            object.vertices.push_back(vertexi); //appending to the list of vertices in obj.
        }
        else if (type == "f")
        {
            int v1, v2, v3; //Initializing variables for each face. 
            linestream >> v1 >> v2 >> v3; //assinging to things. 
            face facei(v1, v2, v3); //Assigning to face data type. 
            object.faces.push_back(facei); //appending to the list of faces in obj. 
        }
    };  
    return object;
}; 