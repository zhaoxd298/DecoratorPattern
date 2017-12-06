#include <iostream>

#include "Beverage.h"
#include "Coffee.h"
#include "CondimentDecorator.h"
#include "CondimentMocha.h"
#include "CondimentWhip.h"

using std::cout;
using std::endl;
using namespace starbuzz;

int main()
{
    Beverage *beverage = new Coffee("Coffee", 3);   // 咖啡
    Beverage *mocha = new CondimentMocha(beverage);     // 加入摩卡
    Beverage *whip = new CondimentWhip(mocha);          // 加入奶泡

    cout << beverage->getDescription() << ":" << beverage->getCost() << endl; 
    cout << mocha->getDescription() << ":" << mocha->getCost() << endl; 
    cout << whip->getDescription() << ":" << whip->getCost() << endl; 

    delete whip;
    delete mocha;
    delete beverage;

    return 0;
}

