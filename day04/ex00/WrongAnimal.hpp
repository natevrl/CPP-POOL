#if !defined(WRONGANIMAL_H)
#define WRONGANIMAL_H

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


#endif // WRONGANIMAL_H
