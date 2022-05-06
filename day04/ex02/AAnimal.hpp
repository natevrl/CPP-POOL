#if !defined(AAnimal_H)
#define AAnimal_H

#include <cstdio>
#include <iostream>
#include <iomanip>

class AAnimal
{
public:
    // Canonical form
    AAnimal(void);
    virtual ~AAnimal(void);
    AAnimal(const AAnimal &copy);
    AAnimal &operator=(const AAnimal &cmp);

    virtual std::string getType(void) const;
    virtual void makeSound(void) const = 0;

private:
    ;
protected:
    std::string type;
    
};


#endif // AAnimal_H
