#include "Cat.hpp"

Cat::Cat()
{
  this->type = "Cat";
  this->think = new Brain;
  std::cout << "Cat constructor is called !" << std::endl;
}

Cat::Cat(Cat const &copy)
{
  this->type = "Cat";
  *this = copy;
  std::cout << "Cat copy constructor is called !" << std::endl;
}

Cat::~Cat()
{
 std::cout << "Dog destructor is called ! " << std::endl;
  delete this->think;
}

Cat &Cat::operator=(const Cat &copy)
{
  std::cout << "Cat assignement is called !" << std::endl;
  Animal::operator=(copy);
  return (*this);
}

void Cat::makeSound()const
{
  std::cout << "Cat: Miaou !!" << std::endl;
}

std::string Cat::getIdea(int index)
{
  std::cout << "Cat: Miaou !!" << std::endl;
  return(this->think->getIdea(index));
}

void	Cat::printIdea( void ) const {
  std::cout << "============" << std::endl;
	if (this->think)
		this->think->printIdeas();
  std::cout << "============" << std::endl;
}