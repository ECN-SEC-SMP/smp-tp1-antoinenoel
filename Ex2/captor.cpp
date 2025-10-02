#include "captor.h"
#include <vector>
#include <string>
#include <iostream>

std::vector<int> split(const std::string& s , const std::string& delimiter)
{
    std::vector<int> tokens;
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos)
    {
        token = s.substr(pos_start, pos_end - pos_start);
        int v = std::stoi(token);
        pos_start = pos_end + delim_len;
        if (v == -1) break; // fin de trame
        tokens.push_back(v); 
    }

    return tokens;
}