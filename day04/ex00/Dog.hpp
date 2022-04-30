#if !defined(DOG_H)
#define DOG_H

#include <cstdio>
#include <iostream>
#include <iomanip>

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        // Canonical form
        Dog(void);
        ~Dog(void);
        Dog(const Dog &copy);
        Dog &operator=(const Dog &cmp);

        virtual std::string getType(void) const;
        virtual void makeSound(void) const;

    private:
        ;
    protected:
        std::string type;
};


#endif // DOG_H
