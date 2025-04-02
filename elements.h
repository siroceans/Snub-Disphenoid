#pragma once
#include <vector>
#include <cmath>

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

struct point
{
    int x, y; 
}; 

struct pointsVector //Structure for each point that is going to be printed
{
    std::vector<point> points; 
    
    void addObjPoints(obj& object)  //Method to grab points from the vertices of an obj. 
    {
        for(vertex& v : object.vertices)
        {
            point pn; //creating an empty point
            pn.x = static_cast<int>(std::round(v.x)); 
            pn.y = static_cast<int>(std::round(v.y)); 
            points.push_back(pn); 
        }
    }

    void shiftPoints() //function that shifts all of the points if they are off the screen!
    {
        //initializing variables for comparisons.
        int largest = INT_MAX; 
        int minx = largest; 
        int miny = largest; 

        //Finding the minimum values
        for(point& p : points)
        {
            if(p.x < minx){
                minx = p.x;
            }           
            if(p.y < miny){
                miny = p.y; 
            }
        }
        
        //Shifting all of the points.
        if(minx < 0){
            for (point& p : points)
            {
                p.x = p.x - minx; 
            }
        }
        if(miny < 0){
            for(point& p : points)
            {
                p.y = p.y - miny; 
            }
        }

    }
}; 