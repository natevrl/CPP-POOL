#if !defined(DOG_H)
#define DOG_H

#include <cstdio>
#include <iostream>
#include <iomanip>

#include "AAnimal.hpp"
#include "Brain.hpp"


class Dog : public AAnimal
{
    public:
        // Canonical form
        Dog(void);
        virtual ~Dog(void);
        Dog(const Dog &copy);
        Dog &operator=(const Dog &cmp);
        
        virtual std::string getType(void) const;
        virtual void makeSound(void) const;

    private:
        Brain *brain;
    protected:
        std::string type;
};


#endif // DOG_H
