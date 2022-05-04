#include "Cat.hpp"

// ------------- Init Canonique -----------

Cat::Cat(void) : type("Cat")
{
        std::cout << "Cat's default constructor called" << std::endl;
        return ;
}

Cat::~Cat(void) // Destructor  
{ 
        std::cout << "Cat is done (default destructor called)" << std::endl;
        return ; 
}

std::string Cat::getType(void) const
{
    return (this->type);
}

Cat & Cat::operator=(const Cat &cmp) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &cmp) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->type = cmp.getType();
        return *this;
}


void Cat::makeSound(void) const
{
    std::cout << "MIAAAAAAAAAAAAAAAAWOOOUUW" << std::endl;
}




std::ostream & operator<<(std::ostream & o, Cat const & rhs )
{
        o << rhs.getType();
        return o;
}