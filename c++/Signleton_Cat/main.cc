#include "Create_cat.h"


int main()
{
    int Variety = 0;
    std::shared_ptr<Cat> cat = create_cat(1);
    cat->print_role();

    cat = create_cat(2);
    cat->print_role();

    return 0;
}