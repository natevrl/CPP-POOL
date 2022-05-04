#if !defined(BRAIN_H)
#define BRAIN_H

#include <cstdio>
#include <iostream>
#include <iomanip>

#include "Animal.hpp"

class Brain
{
    public:
        // Canonical form
        Brain(void);
        ~Brain(void);
        Brain(const Brain &copy);
        Brain &operator=(const Brain &cmp);

        std::string ideas[100];
    private:
        ;
    protected:
        ;
};


#endif // BRAIN_H
