#include <iostream>
#include <vector>
#include <memory>
#include "developer.hpp"

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    // Create Developer objects
    std::shared_ptr<Developer> seniorDev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    std::shared_ptr<Developer> juniorDev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");

    // Add Developer objects to the vector
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // Iterate over the vector and call solve_problem() for each Developer
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}1~
#include <iostream>
#include <vector>
#include <memory>
#include "developer.hpp"

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    // Create Developer objects
    std::shared_ptr<Developer> seniorDev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    std::shared_ptr<Developer> juniorDev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");

    // Add Developer objects to the vector
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // Iterate over the vector and call solve_problem() for each Developer
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}1~
#include <iostream>
#include <vector>
#include <memory>
#include "developer.hpp"

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    // Create Developer objects
    std::shared_ptr<Developer> seniorDev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    std::shared_ptr<Developer> juniorDev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");

    // Add Developer objects to the vector
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // Iterate over the vector and call solve_problem() for each Developer
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}1~#include <iostream>
#include <vector>
#include <memory>
#include "developer.hpp"

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    // Create Developer objects
    std::shared_ptr<Developer> seniorDev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    std::shared_ptr<Developer> juniorDev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");

    // Add Developer objects to the vector
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // Iterate over the vector and call solve_problem() for each Developer
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}
