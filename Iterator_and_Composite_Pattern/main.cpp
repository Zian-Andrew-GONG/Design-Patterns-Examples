#include "Iterator.h"
#include "Composite.h"

int main() {
  std::vector<std::string> vec_str = {"A", "B", "C"};
  auto concrete_agg = std::shared_ptr<Aggregate>(new ConcreteAggregate_1(vec_str));
  auto concrete_ptr = concrete_agg->createIterator();
  while (concrete_ptr->hasNext())
  {
    concrete_ptr->next().getName();
  }
  std::cout << std::endl;
  auto composite_1 = std::shared_ptr<Component>(new Composite("A"));
  auto composite_2 = std::shared_ptr<Component>(new Composite("B"));
  auto composite_3 = std::shared_ptr<Component>(new Composite("C"));
  auto composite_4 = std::shared_ptr<Component>(new Composite("D"));
  composite_1->add(composite_2);
  composite_1->add(composite_3);
  composite_3->add(composite_4);
  composite_1->operation();
  composite_1->getChild(0)->operation();
  composite_1->getChild(1)->operation();
  composite_1->getChild(1)->getChild(0)->operation();

  return 0;
}