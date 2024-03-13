#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <random>
#include <iostream>
#include "game.h"

std::string get_answer();
std::string get_guess();
bool print_result(const Result& r);

#endif