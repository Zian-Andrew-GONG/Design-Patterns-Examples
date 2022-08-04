#include <memory>
#include <iostream>

namespace Adapter {
  class Duck {
    public:
      virtual void quack() = 0;
      virtual void fly() = 0;
      virtual ~Duck() = default;
  };

  class MallardDuck: public Duck {
    public:
      virtual void quack() override {
        std::cout << "MallardDuck quack" << std::endl;
      }
      virtual void fly() override {
        std::cout << "MallardDuck fly" << std::endl;
      }
  };

  class Turkey {
    public:
      virtual void gobble() = 0;
      virtual void fly() = 0;
      virtual ~Turkey() = default;
  };

  class WildTurkey: public Turkey {
    public:
      virtual void gobble() override {
        std::cout << "WildTurkey gobble" << std::endl;
      }
      virtual void fly() override {
        std::cout << "WildTurkey fly" << std::endl;
      }
  };

  class O_TurkeyAdapter: public Duck {  // 对象适配器
    public:
      O_TurkeyAdapter(std::shared_ptr<Turkey> turkey) {
        this->turkey = turkey;
      }
      virtual void quack() override {
        turkey->gobble();
      }
      virtual void fly() override {
        turkey->fly();
      }
    private:
      std::shared_ptr<Turkey> turkey;
  };

  class C_WildTurkeyAdapter: public Duck, public WildTurkey { // 类适配器？
    public:
      virtual void quack() override {
        this->gobble();
      }
      virtual void fly() override {
        WildTurkey::fly();
      }
  };
}