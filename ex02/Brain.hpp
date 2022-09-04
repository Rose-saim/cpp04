#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string ideas);
        Brain(Brain const &copy);
        ~Brain();
        void	printIdeas( void )const;
        std::string getIdea(int index);
};
        

#endif