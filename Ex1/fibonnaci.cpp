

#include <iostream>
#include "fibonnaci.h"


Fibonacci::Fibonacci(){}
Fibonacci::~Fibonacci(){}

void Fibonacci::calculFibonacci (int u0 , int u1) 
{
    v.push_back(u0);
    v.push_back(u1);
    
    for (int i = 2; i<20;i++)
    {
       int un = v[i-1] + v[i-2]; 
       v.push_back(un);
    }

}

void Fibonacci::printFibonacci()
{
    for (int i=0;i<v.size();i++)
    {
        std::cout << v[i] << "\n";
    }
}

