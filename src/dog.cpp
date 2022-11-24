#include "include/dog.h"
Dog::Dog(const std::string &name) : Animal(name), m_breed{"none"}, m_color("none") {}

Dog::Dog(const Dog &other) : Animal(other), m_breed{other.m_breed}, m_color{other.m_color} {}

Dog::Dog(Dog &&other) : Animal(std::move(other.m_name)), m_breed{std::move(other.m_breed)}, m_color{std::move(other.m_color)} {}

std::string Dog::get_breed() const
{
    return m_breed;
}

std::string Dog::get_color() const
{
    return m_color;
}

void Dog::set_color(const std::string &color)
{
    m_color = color;
}
void Dog::set_breed(const std::string &breed)
{
    m_breed = breed;
}

std::string Dog::toFeed()
{
    return "Meat";
}
std::string Dog::makeSound()
{
    return "Ruff";
}
