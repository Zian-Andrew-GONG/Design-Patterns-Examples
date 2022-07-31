#include "Beverage.h"
#include "Decorator.h"
#include <memory>
#include <iostream>

int main() {
  std::shared_ptr<Beverage> beverage_1(new Espresso());
  std::cout << beverage_1->getDescription() << " $ " << beverage_1->cost() << std::endl;

  std::shared_ptr<Beverage> beverage_2(new HouseBlend());
  std::cout << beverage_2->getDescription() << " $ " << beverage_2->cost() << std::endl;

  std::shared_ptr<CondimentDecorator> decorator_1(new Mocha(beverage_1));
  std::cout << decorator_1->getDescription() << " $ " << decorator_1->cost() << std::endl;
  
  std::shared_ptr<CondimentDecorator> decorator_2(new Mocha(beverage_2));
  std::cout << decorator_2->getDescription() << " $ " << decorator_2->cost() << std::endl;
  return 0;
}