#ifndef _CAT_BRITISHSHORTHAIR_H_
#define _CAT_BRITISHSHORTHAIR_H_

#include "Cat.h"

class Cat_BritishShorthair : public Cat
{
public:

    friend std::shared_ptr<Cat> create_cat(int variety);
    virtual void print_role() {
        std::cout << "I'm BritshShorthair cat" << std::endl;
    }
protected:
    Cat_BritishShorthair() {
        if (self == NULL)
            self = this;
    }
};

#endif