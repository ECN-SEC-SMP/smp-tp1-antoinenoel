
#include "captor.h"
#include <iostream>
#include <vector>

int main()
{

    std::string s;
    std::string delimiter =",";
    std::cin >> s;

    vector<int> v = split(s,delimiter);
    
    //test reception valeur
    for (int i=0; i<v.size();i++){
        std::cout << v[i];
    }
}