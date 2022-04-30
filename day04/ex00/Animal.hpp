#if !defined(ANIMAL_H)
#define ANIMAL_H

#include <cstdio>
#include <iostream>
#include <iomanip>

class Animal
{
public:
    // Canonical form
    Animal(void);
    ~Animal(void);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &cmp);

    virtual std::string getType(void) const;
    virtual void makeSound(void) const;

private:
    ;
protected:
    std::string type;
    
};


#endif // ANIMAL_H
