#include <iostream>

int main() {
    int score;

    std::cout << "Enter an integer score (0-100): ";

    if (!(std::cin >> score)) {
        std::cout << "Error: please enter an integer.\n";
        return 1;
    }

    if (score < 0 || score > 100) {
        std::cout << "Error: score must be between 0 and 100.\n";
        return 1;
    }

    const char* grade;

    if (score >= 90) {
        grade = "Excellent";
    } else if (score >= 80) {
        grade = "Good";
    } else if (score >= 70) {
        grade = "Average";
    } else if (score >= 60) {
        grade = "Pass";
    } else {
        grade = "Fail";
    }

    std::cout << "Your score: " << score << '\n';
    std::cout << "Grade: " << grade << '\n';

    return 0;
}