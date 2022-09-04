#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
  public:
    Cat();
    Cat(Cat const &copy);
    Cat &operator=(const Cat &copy);
    virtual ~Cat();
    void  makeSound()const;
    std::string getIdea(int index);
  void	printIdea( void ) const;
  private:
    Brain *think;
};

#endif