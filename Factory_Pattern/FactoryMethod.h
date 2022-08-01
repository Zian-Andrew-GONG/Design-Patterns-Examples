#include <string>
#include <iostream>
#include <memory>

namespace FM {
  class Pizza {
    public:
      virtual ~Pizza() = default;
      virtual void discription() = 0;
  };

  class PizzaStore {
    public:
      std::shared_ptr<Pizza> order(std::string name) {
        return create(name);
      }
      virtual std::shared_ptr<Pizza> create(std::string name) = 0;
  };

  class NYStyleCheesePizza: public Pizza {
    public:
      virtual void discription() override {
        std::cout << "It is a NYStyle Cheese Pizza." << std::endl;
      }
  };

  class NYStylePepperoniPizza: public Pizza {
    public:
      virtual void discription() override {
        std::cout << "It is a NYStyle Pepperoni Pizza." << std::endl;
      }
  };

  class NYPizzaStore: public PizzaStore {
    virtual std::shared_ptr<Pizza> create(std::string name) override {
      std::shared_ptr<Pizza> pizza;
      if(name == "Cheese") {
        pizza = std::shared_ptr<Pizza>(new NYStyleCheesePizza());
      } else if(name == "Pepperoni") {
        pizza = std::shared_ptr<Pizza>(new NYStylePepperoniPizza());
      } else {
        pizza = nullptr;
      }
      return pizza;
    }
  };

  class ChicagoStyleCheesePizza: public Pizza {
    public:
      virtual void discription() override {
        std::cout << "It is a ChicagoStyle Cheese Pizza." << std::endl;
      }
  };

  class ChicagoStylePepperoniPizza: public Pizza {
    public:
      virtual void discription() override {
        std::cout << "It is a ChicagoStyle Pepperoni Pizza." << std::endl;
      }
  };

  class ChicagoPizzaStore: public PizzaStore {
    public:
      virtual std::shared_ptr<Pizza> create(std::string name) override {
        std::shared_ptr<Pizza> pizza;
        if(name == "Cheese") {
          pizza = std::shared_ptr<Pizza>(new ChicagoStyleCheesePizza());
        } else if(name == "Pepperoni") {
          pizza = std::shared_ptr<Pizza>(new ChicagoStylePepperoniPizza());
        } else {
          pizza = nullptr;
        }
        return pizza;
      }
  };
}

