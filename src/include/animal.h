#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>
class Animal
{
public:
    Animal(const std::string &);
    Animal(const Animal &);
    Animal(Animal &&);
    virtual std::string toFeed() = 0;
    virtual std::string makeSound() = 0;
    virtual unsigned int get_id() const;
    virtual std::string get_name() const;
    virtual void set_name(const std::string &);
    virtual ~Animal();

protected:
    std::string m_name;
    static unsigned int id;
};

#endif //_ANIMAL_H_