#if !defined(WrongAnimal_H)
#define WrongAnimal_H

#include <cstdio>
#include <iostream>
#include <iomanip>

class WrongAnimal
{
public:
    // Canonical form
    WrongAnimal(void);
    ~WrongAnimal(void);
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &cmp);

    std::string getType(void) const;
    void makeSound(void) const;

private:
    ;
protected:
    std::string type;
    
};


#endif // WrongAnimal_H
