#include <iostream>
#include <vector>
#include "elements.h"

void printPoints(int size, std::vector<vertex>& v)
{
    std::vector<char> cbuff(size * size, ' '); 
    for(int y = 0; y < size; y++) //looping thorugh each of the rows in the buffer. 
    {  
        for(int x = 0; x < size; x ++) //now going through each of the lines.
        { 
            if(x == (size-1))
            {
            }
            std::cout << '\n'; 
        }
    }
}