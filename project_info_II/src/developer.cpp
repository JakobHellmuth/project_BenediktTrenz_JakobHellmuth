#include "developer.hpp"

// Developer class implementation

Developer::Developer(const std::string& name, const std::string& alias)
    : name(name), alias(alias) {}

void Developer::drink_spezi() {
    std::cout << "Ahhhh, I needed that spezi!!!" << std::endl;
}

std::string Developer::get_name() const {
    return name;
}

std::string Developer::get_alias() const {
    return alias;
}

std::ostream& operator<<(std::ostream& os, const Developer& developer) {
    os << "Name: " << developer.name << "\nAlias: " << developer.alias;
    return os;
}

// JuniorDeveloper class implementation

void JuniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:\n" << *this << std::endl;
    std::cout << "Ha, that was chaotic!" << std::endl;
    drink_spezi();
}

// SeniorDeveloper class implementation

void SeniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:\n" << *this << std::endl;
    std::cout << "Puh, that was difficult" << std::endl;
    drink_spezi();
}
