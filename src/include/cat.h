#ifndef _CAT_H_
#define _CAT_H_
#include <string>
#include "animal.h"
class Cat : public Animal
{
public:
    Cat(const std::string &);
    Cat(const Cat &);
    Cat(Cat &&);
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

#endif //_CAT_H_