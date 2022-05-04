#include "WrongCat.hpp"

// ------------- Init Canonique -----------

WrongCat::WrongCat(void) : type("WrongCat")
{
        std::cout << "WrongCat's default constructor called" << std::endl;
        return ;
}

WrongCat::~WrongCat(void) // Destructor  
{ 
        std::cout << "WrongCat is done (default destructor called)" << std::endl;
        return ; 
}

std::string WrongCat::getType(void) const
{
    return (this->type);
}

WrongCat & WrongCat::operator=(const WrongCat &cmp) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &cmp) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->type = cmp.getType();
        return *this;
}


void WrongCat::makeSound(void) const
{
    std::cout << "MIAAAAAAAAAAAAAAAAWOOOUUW" << std::endl;
}




std::ostream & operator<<(std::ostream & o, WrongCat const & rhs )
{
        o << rhs.getType();
        return o;
}