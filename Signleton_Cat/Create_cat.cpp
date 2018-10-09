#include "Create_cat.h"
#include "Cat_BritishShorthair.h"
#include "Cat_Munchkin.h"

Cat* Cat::self = NULL;

std::shared_ptr<Cat> create_cat(int variety)
{
    std::shared_ptr<Cat> cat = NULL;
    if (Cat::self == NULL)
    {
        switch (variety)
        {
        case 0:
            cat.reset(new Cat());
            break;
        case 1:
            cat.reset(new Cat_BritishShorthair());
            break;
        case 2:
            cat.reset(new Cat_Munchkin());
            break;
        default:
            cat.reset(new Cat());
        }
    }
    else
    {
        cat = Cat().get_ptr();
    }
    return cat;
}