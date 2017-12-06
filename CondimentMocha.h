#ifndef __CONDIMENT_MOCHA_H
#define __CONDIMENT_MOCHA_H

#include <string>
#include "Beverage.h"
#include "CondimentDecorator.h"

namespace starbuzz
{

class CondimentMocha: public CondimentDecorator
{
public:
    CondimentMocha(Beverage *b): cost(3), description("Mocha")
    {
        this->beverage = b;
    }
    ~CondimentMocha()
    {
    }
    int getCost()
    {
        // 包装新的价格
        return beverage->getCost() + this->cost;
    }
    string getDescription()
    {
        // 包装新的描述
        return this->description + " " + beverage->getDescription();
    }
private:
    int cost;
    string description;
    Beverage *beverage;
};
}

#endif

