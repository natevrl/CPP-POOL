#include "WrongAnimal.hpp"

// ------------- Init Canonique -----------

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
        std::cout << "WrongAnimal's default constructor called" << std::endl;
        return ;
}

WrongAnimal::~WrongAnimal(void) // Destructor  
{ 
        std::cout << "WrongAnimal is done (default destructor called)" << std::endl;
        return ; 
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &cmp) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &cmp) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->type = cmp.getType();
        return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal's noise per default" << std::endl;
}

std::ostream & operator<<(std::ostream & o, WrongAnimal const & rhs )
{
        o << rhs.getType();
        return o;
}