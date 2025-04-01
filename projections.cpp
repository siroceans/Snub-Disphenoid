#include <iostream> 
#include <vector> 
#include "elements.h"
#include "fileReader.h"

obj projectVertex(obj object)
{
    obj object2d;  //creation of the variable. 

    for (const vertex& vertex3d : object.vertices)
    {
        vertex ver2d(vertex3d.x, vertex3d.y, 0); //creating variable called ver2d of type vertex 2d (using ortographic projection)
        object2d.vertices.push_back(ver2d); //ading to obj
    }
    for (const face& face3d :object.faces)
    {
        object2d.faces.push_back(face3d); //faces dont change!! so we just add them on. 
    }
}

