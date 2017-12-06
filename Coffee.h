#ifndef COFFEE_H
#define COFFEE_H
#include "Beverage.h"

namespace starbuzz
{

class Coffee: public Beverage
{
public:
    Coffee(string str, int p) : description(str), cost(p)
    {
    }
    ~Coffee()
    {
    }

    int getCost()
    {
        return cost;
    }
    string getDescription()
    {
        return description;
    }
private:
    string description;
    int cost;
};

}

#endif


