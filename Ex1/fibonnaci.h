#ifndef FIBONNACI_H
#define FIBONNACI_H

#include <vector>

using namespace std;

class Fibonacci {

    public : 
        Fibonacci ();
        ~Fibonacci();
        void calculFibonacci(int u0 , int u1);
        void printFibonacci();

    private : 
        vector<int> v;
};



#endif