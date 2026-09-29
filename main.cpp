#include <iostream>

int main() {
    int score;

    std::cout << "Enter an integer score (0-100): ";

    if (!(std::cin >> score)) {
        std::cout << "Error: please enter an integer.\n";
        return 1;
    }

    std::cout << "Your score: " << score << '\n';

    return 0;
}