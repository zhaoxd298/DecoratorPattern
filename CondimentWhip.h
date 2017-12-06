#ifndef __CONDIMENT_WHIP_H
#define __CONDIMENT_WHIP_H

#include <string>
#include "Beverage.h"
#include "CondimentDecorator.h"

namespace starbuzz
{

class CondimentWhip: public CondimentDecorator
{
public:
    CondimentWhip(Beverage *b): cost(10), description("Whip")
    {
        this->beverage = b;
    }
    ~CondimentWhip()
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

