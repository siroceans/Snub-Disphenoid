#pragma once
#include <vector>

struct vertex
{
    float x, y, z;

    vertex(float x, float y, float z) : x(x), y(y), z(z) {}; //Constructor Method.
}; 

struct face
{
    int v1, v2, v3; 

    face(int v1, int v2, int v3) : v1(v1), v2(v2), v3(v3) {}; //Constructor Method.
}; 

struct obj
{
    std::vector<vertex> vertices; //vector containing vertices of the object. 
    std::vector<face> faces; //vector contaning faces of the object.   

    void ortoProject() //Struct Method to do an ortographic projection into the x,y axis. 
    {
        for (vertex& v : vertices)
        {
            v.z = 0; //makes the z - coordinate = 0 (in the same object instance)
        }
    }

    obj copyObj() //method to make a copy of the object. 
    {
        obj result; 
        result.vertices = vertices; 
        result.faces = faces;
        return result; 
    }

    void scale(int factor) //Method that scales all of the vertices by the given value.
    {
        for (vertex& v : vertices) 
        {
            v.x = v.x * factor; 
            v.y = v.y * factor; 
            v.z = v.z * factor; 
        }
    }
};