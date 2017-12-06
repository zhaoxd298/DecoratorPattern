#ifndef __CONDIMENT_DECORATOR_H
#define __CONDIMENT_DECORATOR_H

#include "Beverage.h"

namespace starbuzz
{

class CondimentDecorator: public Beverage
{
public:
    CondimentDecorator() {}
    virtual ~CondimentDecorator() {}
};
}

#endif

