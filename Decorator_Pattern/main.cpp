/* 
 * Decorator Pattern 允许向一个现有的对象添加新的功能，同时又不改变其结构
 * 这种模式创建了一个装饰类，用来包装原有的类，并在保持类方法签名完整性的前提下，提供了额外的功能。
 * 利用 “has a” 替代 “is a”
 */

#include "Beverage.h"
#include "Decorator.h"
#include <memory>
#include <iostream>

int main() {
  std::shared_ptr<Beverage> beverage_1(new Espresso());
  std::cout << beverage_1->getDescription() << " $ " << beverage_1->cost() << std::endl;
  std::shared_ptr<Beverage> beverage_2(new HouseBlend());
  std::cout << beverage_2->getDescription() << " $ " << beverage_2->cost() << std::endl;

  std::shared_ptr<Beverage> beverage_3(new Mocha(beverage_1));
  std::cout << beverage_3->getDescription() << " $ " << beverage_3->cost() << std::endl;
  std::shared_ptr<Beverage> beverage_4(new Mocha(beverage_2));
  std::cout << beverage_4->getDescription() << " $ " << beverage_4->cost() << std::endl;
  
  std::shared_ptr<Beverage> beverage_5(new Milk(beverage_3));
  std::cout << beverage_5->getDescription() << " $ " << beverage_5->cost() << std::endl;
  std::shared_ptr<Beverage> beverage_6(new Milk(beverage_4));
  std::cout << beverage_6->getDescription() << " $ " << beverage_6->cost() << std::endl;
  
  return 0;
}