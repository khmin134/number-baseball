#include "../inc/util.h"

std::string get_answer() {
START:
    while(true) {
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<int> dist(100, 999);

        std::string answer = std::to_string(dist(rng));

        for(size_t i = 1; i < answer.size(); i++) {
            if(answer[0] == answer[i]) goto START;
        }

        return answer;
    }
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