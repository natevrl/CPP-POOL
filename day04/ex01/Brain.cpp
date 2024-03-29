#include "Brain.hpp"

// ------------- Init Canonique -----------

Brain::Brain(void)
{
        std::cout << "Brain's default constructor called" << std::endl;
        return ;
}

Brain::~Brain(void) // Destructor  
{ 
        std::cout << "Brain is done (default destructor called)" << std::endl;
        return ; 
}

// std::string Brain::getType(void) const
// {
//     return (this->type);
// }

// Brain & Brain::operator=(const Brain &cmp) // Operator Overload =
// {
//         std::cout << "Copy assignment operator called" << std::endl;
//         if ( this != &cmp) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
//                 this->type = cmp.getType();
//         return *this;
// }


// std::ostream & operator<<(std::ostream & o, Brain const & rhs )
// {
//         o << rhs.getType();
//         return o;
// }