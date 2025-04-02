#include <iostream>
#include <vector>
#include "elements.h"

void printVertices(int size, pointsVector& pv) 
{
    //creating a cbuff with all of the current points
    char marker = '*';
    std::vector<char> cbuff(size * size, ' '); 
    for(point& p : pv.points)
    {
        cbuff[p.y * size + p.x] = marker; 
    }
    
    //printing said cbuff into a sizexsize grid. 
    for(int y = 0; y < size; y++)
    {
        for(int x = 0; x < size; x++)
        {
            std::cout << cbuff[y * size + x];//printing every character in cbuff
        }
        std::cout << '\n'; //making sure we break line after going through each row.
    }
}
