#include <memory>
#include <iostream>

class Base1 {
  public:
    virtual void method() = 0;
};

class Base2 {
  public:
    virtual void method() = 0;
};

class Derive1: public Base1 {
  public:
    virtual void method() override {
      std::cout << "method of Derive1" << std::endl;
    }
};

class Derive2: public Base1 {
  public:
    virtual void method() override {
      std::cout << "method of Derive2" << std::endl;
    }
};

class Adapter: public Base1, Base2 {
  public:
        
};

