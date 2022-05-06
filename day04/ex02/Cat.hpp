#if !defined(CAT_H)
#define CAT_H

#include <cstdio>
#include <iostream>
#include <iomanip>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public:
        // Canonical form
        Cat(void);
        virtual ~Cat(void);
        Cat(const Cat &copy);
        Cat &operator=(const Cat &cmp);

        virtual std::string getType(void) const;
        virtual void makeSound(void) const;

    private:
        Brain *brain;
    protected:
        std::string type;
        
};

std::ostream &operator<<(std::ostream &o, Cat const &rhs);

#endif // CAT_H
