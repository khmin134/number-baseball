#include <string>
#include <iostream>
#include "../inc/game.h"
#include "../inc/util.h"

int main() {
    std::string answer = get_answer();


    while(true) {
        std::string guess = get_guess();

        auto result = check_anwser(answer, guess);

        if(print_result(result)) break;
    }
}