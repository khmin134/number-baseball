#include "../inc/game.h"

Result check_anwser(const std::string& anwser, const std::string& guess) {
    Result r = { 0, 0 };
    int alen = anwser.length(), glen = anwser.length();

    for(int i = 0; i < alen; i++) {
        for(int j = 0; j < glen; j++) {
            if(anwser[i] == guess[j]) {
                if(i == j) r.strikes++;
                else r.balls++;
            }
        }
    }
    
    return r;
}