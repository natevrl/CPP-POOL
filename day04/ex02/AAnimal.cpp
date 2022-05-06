#include "Cat.hpp"

// ------------- Init Canonique -----------

AAnimal::AAnimal(void) : type("AAnimal")
{
        std::cout << "AAnimal's default constructor called" << std::endl;
        return ;
}

AAnimal::~AAnimal(void) // Destructor  
{ 
        std::cout << "AAnimal is done (default destructor called)" << std::endl;
        return ; 
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}

AAnimal & AAnimal::operator=(const AAnimal &cmp) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &cmp) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->type = cmp.getType();
        return *this;
}

void AAnimal::makeSound(void) const
{
    std::cout << "AAnimal's noise per default" << std::endl;
}

std::ostream & operator<<(std::ostream & o, AAnimal const & rhs )
{
        o << rhs.getType();
        return o;
}