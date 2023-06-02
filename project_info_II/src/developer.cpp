#include "developer.hpp"

// Developer class implementation

Developer::Developer(const std::string& name, const std::string& alias)
    : name(name), alias(alias) {}

void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

std::string Developer::getName() const {
    return name;
}

std::string Developer::getAlias() const {
    return alias;
}

std::ostream& operator<<(std::ostream& os, const Developer& developer) {
    os << "Name: " << developer.name << "\nAlias: " << developer.alias;
    return os;
}

// JuniorDeveloper class implementation

void JuniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:\n" << *this << std::endl;
    std::cout << "Ha, that was EZ!" << std::endl;
    drink_coffee();
}

// SeniorDeveloper class implementation

void SeniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:\n" << *this << std::endl;
    std::cout << "Puh, that was tough" << std::endl;
    drink_coffee();
}
