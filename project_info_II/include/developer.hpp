#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <iostream>
#include <memory>

class Developer
{
protected:
    std::string name;
    std::string alias;

public:
    // Constructor
    Developer(const std::string& name, const std::string& alias);

    // Static method
    static void drink_spezi();

    // Getter methods
    std::string get_name() const;
    std::string get_alias() const;

    // Pure virtual method
    virtual void solve_problem() = 0;

    // Friend function for stream output
    friend std::ostream& operator<<(std::ostream& os, const Developer& developer);
};

class JuniorDeveloper : public Developer
{
public:
    using Developer::Developer;

    // solve_problem method
    void solve_problem() override;
};

class SeniorDeveloper : public Developer
{
public:
    using Developer::Developer;

    // Override solve_problem() method
    void solve_problem() override;
};

#endif

