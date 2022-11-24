#include "include/animal.h"

unsigned int Animal::id = 0;

Animal::Animal(const std::string &name) : m_name{name}
{
    ++id;
}

Animal::Animal(const Animal &other) : m_name{other.m_name}
{
    ++id;
}

Animal::Animal(Animal &&other) : m_name{std::move(other.m_name)} {}

void Animal::set_name(const std::string &name)
{
    m_name = name;
}

std::string Animal::get_name() const
{
    return m_name;
}

unsigned int Animal::get_id() const
{
    return id;
}

Animal::~Animal()
{
    --id;
}