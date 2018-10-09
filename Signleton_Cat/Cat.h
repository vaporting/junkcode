#ifndef _CAT_H_
#define _CAT_H_

#include <iostream>
#include <memory>
#include "Create_cat.h"

class Cat : public std::enable_shared_from_this<Cat>
{
public:

    virtual ~Cat() = default;
    Cat(const Cat& cat) = delete;
    Cat(Cat&& cat) = delete;
    Cat& operator = (const Cat& cat) = delete;


    std::shared_ptr<Cat> get_ptr() {
        return self->shared_from_this();
    }

    virtual void print_role() {
        std::cout << "I'm cat" << std::endl;
    }

    friend std::shared_ptr<Cat> create_cat(int variety);
protected:
    Cat() {
        if (self == NULL)
            self = this;
    }
protected:
    static Cat* self;
};

#endif