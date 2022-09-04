#include "Dog.hpp"
Dog::Dog()
{
  this->type = "Dog";
  this->think = new Brain;
  std::cout << "Dog constructor is called !" << std::endl;
}

Dog::Dog(Dog const &copy)
{
  this->type = "Dog";
  std::cout << "Dog copy constructor is called !" << std::endl;
  *this = copy;
}

Dog::~Dog()
{
  delete this->think;
  std::cout << "Dog destructor is called ! " << std::endl;
}

Dog &Dog::operator=(Dog const &copy) {
  std::cout << "Dog assignement is called !" << std::endl;
  Animal::operator=(copy);
  return (*this);
}

void Dog::makeSound()const
{
  std::cout << "Dog: Ouaf !!" << std::endl;
}
void	Dog::printIdea( void ) const {
	if (this->think)
		this->think->printIdeas();
}