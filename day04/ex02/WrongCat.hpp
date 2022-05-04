#if !defined(WRONGCAT_H)
#define WRONGCAT_H

#include <cstdio>
#include <iostream>
#include <iomanip>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        // Canonical form
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &cmp);

        std::string getType(void) const;
        void makeSound(void) const;

    private:
        ;
    protected:
        std::string type;
        
};

std::ostream &operator<<(std::ostream &o, WrongCat const &rhs);

#endif // WRONGCAT_H
