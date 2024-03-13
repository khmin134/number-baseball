#include <string>
#include <iostream>
#include "../inc/game.h"
#include "../inc/util.h"

int main() {
    std::string answer = get_answer();
    int cnt = 5;
    while(true) {
        if(cnt == 0) {
            std::cout << "You lose!" << std::endl;
            return 0;
        }

        std::cout << cnt-- << " chance left." << std::endl;

        std::string guess = get_guess();

        auto result = check_anwser(answer, guess);

        if(print_result(result)) break;
    }
}