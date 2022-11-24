#ifndef _DOG_H_
#define _DOG_H_
#include <string>
#include "animal.h"
class Dog : public Animal
{
public:
    Dog(const std::string &);
    Dog(const Dog &);
    Dog(Dog &&);
    std::string toFeed() override;
    std::string makeSound() override;
    std::string get_breed() const;
    std::string get_color() const;
    void set_color(const std::string &);
    void set_breed(const std::string &);

private:
    std::string m_breed;
    std::string m_color;
};

#endif //_DOG_H_