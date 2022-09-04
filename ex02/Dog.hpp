#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  public:
    Dog();
    Dog(Dog const &copy);
    Dog &operator=(Dog const &copy);
    virtual ~Dog();
  void	printIdea( void ) const;
    void makeSound()const;
  private:
    Brain *think;
};

#endif
