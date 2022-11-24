#include "include/cat.h"
Cat::Cat(const std::string &name) : Animal(name), m_breed{"none"}, m_color("none") {}

Cat::Cat(const Cat &other) : Animal(other), m_breed{other.m_breed}, m_color{other.m_color} {}

Cat::Cat(Cat &&other) : Animal(std::move(other.m_name)), m_breed{std::move(other.m_breed)}, m_color{std::move(other.m_color)} {}

std::string Cat::get_breed() const
{
    return m_breed;
}

std::string Cat::get_color() const
{
    return m_color;
}

void Cat::set_color(const std::string &color)
{
    m_color = color;
}
void Cat::set_breed(const std::string &breed)
{
    m_breed = breed;
}

std::string Cat::toFeed()
{
    return "Mause";
}
std::string Cat::makeSound()
{
    return "Meow";
}
