#include "include/cat.h"
#include "include/dog.h"
#include <iostream>

int main()
{
    Cat cat("Murzik");
    cat.set_breed("Abyssinian");
    cat.set_color("White");
    std::cout << cat.get_breed() << std::endl;
    std::cout << cat.get_color() << std::endl;
    std::cout << cat.get_name() << std::endl;
    std::cout << cat.get_id() << std::endl;
    std::cout << cat.toFeed() << std::endl;
    std::cout << cat.makeSound() << std::endl;
    
    std::cout << "\n\n";

    Dog dog("Lucky");
    dog.set_breed("Labrador");
    dog.set_color("Black");
    std::cout << dog.get_breed() << std::endl;
    std::cout << dog.get_color() << std::endl;
    std::cout << dog.get_name() << std::endl;
    std::cout << dog.get_id() << std::endl;
    std::cout << dog.toFeed() << std::endl;
    std::cout << dog.makeSound() << std::endl;
}