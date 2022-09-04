#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor default is called" << std::endl;
}

Brain::Brain(std::string idea)
{
    (void)idea;
    std::cout << "Brain Constructor copy is called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "OK";
}
Brain::Brain(Brain const &copy)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
    std::cout << "Brain Constructor copy is called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor default is called" << std::endl;
}

std::string Brain::getIdea(int index)
{
    return (this->ideas[index]);
}

void	Brain::printIdeas( void ) const {
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}