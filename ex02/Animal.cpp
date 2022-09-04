#include "Animal.hpp"

Animal::Animal()
{
  std::cout << "Animal conctructor is called !" << std::endl;
}

Animal::Animal(Animal const &copy)
{
  std::cout << "Animal copy conctructor is called !" << std::endl;
  *this = copy;
}

Animal::~Animal() {
  std::cout << "Animal desctructor is called !" << std::endl;
}

void Animal::makeSound()const
{
  std::cout << "I have not sound !" << std::endl; 
}

Animal& Animal::operator=(Animal const &copy)
{
  this->type = copy.type;
  return(*this);
}

std::string  Animal::GetType()const
{
  return(this->type);
}