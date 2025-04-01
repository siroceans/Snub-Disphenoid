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
};