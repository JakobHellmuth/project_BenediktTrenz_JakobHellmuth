
#include <iostream>
#include <vector>
#include <memory>
#include "developer.hpp"

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    // Create Developer objects
    std::shared_ptr<Developer> seniorDev = std::make_shared<SeniorDeveloper>("Jakob Hellmuth", "Bobi");
    std::shared_ptr<Developer> juniorDev = std::make_shared<JuniorDeveloper>("Benedikt Trenz", "Ben");

    // Add Developer objects to the vector
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // Iterate over the vector and call solve_problem() for each Developer
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}