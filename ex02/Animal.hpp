#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
  Animal();
  virtual ~Animal();
  Animal(Animal const &copy);
  Animal  &operator=(Animal const &copy);
	virtual void		printIdeas( void ) const { };
  virtual void makeSound()const;
  virtual std::string  GetType()const;
protected:
  std::string type;
};
#endif
