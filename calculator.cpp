#include <iostream>
#include "calculator.h"

double calculateDuration(double distance, double pace) {
    double baseTime = distance / pace;
    return baseTime * 1.2; // 20% beginner buffer
}

double calculateWater(double duration) {
    return duration * 0.75; // 0.75 liters per hour
}

int calculateCalories(double duration) {
    return static_cast<int>(duration * 400); // approx calories burned per hour
}

void clothingRecommendation(double temperature) {
    std::cout << "\nClothing Suggestions:\n";

    if (temperature < 50) {
        std::cout << "- Insulated jacket\n";
        std::cout << "- Gloves\n";
        std::cout << "- Warm layers\n";
    } else if (temperature < 70) {
        std::cout << "- Light long sleeves\n";
        std::cout << "- Comfortable hiking pants\n";
    } else {
        std::cout << "- Moisture-wicking shirt\n";
        std::cout << "- Hat and sunscreen\n";
    }
}