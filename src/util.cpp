#include "../inc/util.h"

std::string get_answer() {
    std::string answer;

    std::cout << "Enter a answer: ";
    std::cin >> answer;

    return answer;
}

std::string get_guess() {
    std::string guess;

    std::cout << "Enter a guess: ";
    std::cin >> guess;

    return guess;
}

bool print_result(const Result& r) {
    if(r.strikes == 3) {
        std::cout << "You win!" << std::endl;
        return true;
    } else {
        std::cout << "Strikes: " << r.strikes << ", Balls: " << r.balls << std::endl;
        return false;
    }
}