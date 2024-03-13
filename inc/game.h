#ifndef GAME_H
#define GAME_H

#include <string>

struct Result {
    int strikes;
    int balls;    
};

Result check_anwser(const std::string& anwser, const std::string& guess);

#endif