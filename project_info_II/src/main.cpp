#include "developer.hpp"
#include <iostream>
#include <memory>
#include <vector>


auto main() -> int {
    std::vector<std::shared_ptr<Developer>> developers;

    // Create Developer objects
    std::shared_ptr<Developer> senior_dev = std::make_shared<SeniorDeveloper>("Jakob Hellmuth", "Bobi");
    std::shared_ptr<Developer> junior_dev = std::make_shared<JuniorDeveloper>("Benedikt Trenz", "Ben");

    // Add Developer objects to the vector
    developers.push_back(senior_dev);
    developers.push_back(junior_dev);

    // Iterate over the vector and call solve_problem() for each Developer
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}