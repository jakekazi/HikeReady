#include <iostream>
#include "calculator.h"

int main() {
    double distance;
    double pace;
    double temperature;

    std::cout << "=== Welcome to HikeReady ===\n\n";

    std::cout << "Enter hike distance (miles): ";
    std::cin >> distance;

    std::cout << "Enter your pace (miles per hour): ";
    std::cin >> pace;

    std::cout << "Enter expected temperature (°F): ";
    std::cin >> temperature;

    double duration = calculateDuration(distance, pace);
    double water = calculateWater(duration);
    int calories = calculateCalories(duration);

    std::cout << "\n--- Hike Summary ---\n";
    std::cout << "Estimated Duration: " << duration << " hours\n";
    std::cout << "Recommended Water: " << water << " liters\n";
    std::cout << "Estimated Calories Burned: " << calories << " kcal\n";

    clothingRecommendation(temperature);

    std::cout << "\n=== Stay Safe & Enjoy Your Hike! ===\n";

    return 0;
}