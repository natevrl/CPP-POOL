#if !defined(BRAIN_H)
#define BRAIN_H

#include <cstdio>
#include <iostream>
#include <iomanip>


class Brain
{
    public:
        // Canonical form
        Brain(void);
        ~Brain(void);
        Brain(const Brain &copy);
        Brain &operator=(const Brain &cmp);

    private:
        std::string ideas[100];
    protected:
        ;
};


#endif // BRAIN_H
