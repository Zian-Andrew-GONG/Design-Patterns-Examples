#include <string>
#include <iostream>
#include <memory>

namespace SF {
  class Pizza {
    public:
      virtual void discription() = 0;
      virtual ~Pizza() = default;
  };

  class CheesePizza: public Pizza {
    public:
      virtual void discription() override {
        std::cout << "It is a Cheese Pizza." << std::endl;
      }
  };

  class PepperoniPizza: public Pizza {
    public:
      virtual void discription() override {
        std::cout << "It is a Pepperoni Pizza." << std::endl;
      }
  };

  class SimplePizzaFactory {
    public:
      std::shared_ptr<Pizza> create(std::string name) {
        std::shared_ptr<Pizza> pizza;
        if(name == "Cheese") {
          pizza = std::shared_ptr<Pizza>(new CheesePizza());
        } else if(name == "Pepperoni") {
          pizza = std::shared_ptr<Pizza>(new PepperoniPizza());
        } else {
          pizza = nullptr;
        }
        return pizza;
      }
  };

  class PizzaStore {
    public:
      std::shared_ptr<Pizza> order(std::string name) {
        return factory->create(name);
      }
    private:
      std::shared_ptr<SimplePizzaFactory> factory;
  };
}
