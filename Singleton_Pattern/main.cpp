#include "Singleton.h"
#include <memory>
int main() {
  auto singleton1 = Singleton::getSingleton();
  if(singleton1 != nullptr) singleton1->print();
  else std::cout << "singleton1 == nullptr" << std::endl;

  auto singleton2 = Singleton::getSingleton();
  if(singleton2 != nullptr) singleton2->print();
  else std::cout << "singleton2 == nullptr" << std::endl;
  
  return 0;
}
