#ifndef _CAT_MUNCHKIN_H_
#define _CAT_MUNCHKIN_H_

#include "Cat.h"

class Cat_Munchkin : public Cat
{
public:

    friend std::shared_ptr<Cat> create_cat(int variety);
    virtual void print_role() {
        std::cout << "I'm Munchkin cat" << std::endl;
    }
protected:
    Cat_Munchkin() {
        if (self == NULL)
            self = this;
    }
};

#endif