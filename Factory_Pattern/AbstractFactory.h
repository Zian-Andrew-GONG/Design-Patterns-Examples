#include <string>
#include <iostream>
#include <memory>

namespace AF {
  class Sauce {
    public: 
      virtual void description() = 0;
      virtual ~Sauce() = default;
  };
  class MarinaraSauce: public Sauce {
    public:
      virtual void description() override {
        std::cout << "MarinaraSauce" << std::endl;
      }
  };
  class PlumTomatoSauce: public Sauce {
    public:
      virtual void description() override {
        std::cout << "PlumTomatoSauce" << std::endl;
      }
  };

  class Cheese {
    public: 
      virtual void description() = 0;
      virtual ~Cheese() = default;
  };
  class ReggianoCheese: public Cheese {
    public:
      virtual void description() override {
        std::cout << "ReggianoCheese" << std::endl;
      }
  };

  class MozzarellaCheese: public Cheese {
    public:
      virtual void description() override {
        std::cout << "MozzarellaCheese" << std::endl;
      }
  };

  class PizzaIngredientFactory {
    public:
      virtual std::shared_ptr<Sauce> createSauce() = 0;
      virtual std::shared_ptr<Cheese> createCheese() = 0;
      virtual ~PizzaIngredientFactory() = default;
  };
  class NYPizzaIngredientFactory: public PizzaIngredientFactory {
    public:
      virtual std::shared_ptr<Sauce> createSauce() override {
        return std::shared_ptr<Sauce>(new MarinaraSauce());
      }
      virtual std::shared_ptr<Cheese> createCheese() override {
        return std::shared_ptr<Cheese>(new ReggianoCheese());
      }
  };
  class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory {
    public:
      virtual std::shared_ptr<Sauce> createSauce() override {
        return std::shared_ptr<Sauce>(new PlumTomatoSauce());
      }
      virtual std::shared_ptr<Cheese> createCheese() override {
        return std::shared_ptr<Cheese>(new MozzarellaCheese());
      }
  };

  class Pizza {
    public:
      virtual void prepare() = 0;
      void setName(std::string name) {
        this->name = name;
      }
      void description() {
        std::cout << name << " with: \n";
        if(cheese != nullptr) cheese->description();
        if(sauce != nullptr) sauce->description();
        std::cout << std::endl;
      }
    protected:
      std::shared_ptr<Cheese> cheese;
      std::shared_ptr<Sauce> sauce;
      std::string name;
  };
  class CheesePizza: public Pizza {
    public:
      CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory) {
        this->ingredientFactory = ingredientFactory;
      }
      virtual void prepare() override {
        std::cout << "Preparing CheesePizza... " << name << std::endl;
        cheese = ingredientFactory->createCheese();
        sauce = ingredientFactory->createSauce();
      }
    private:
      std::shared_ptr<PizzaIngredientFactory> ingredientFactory;
  };
  class PepperoniPizza: public Pizza {
    public:
      PepperoniPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory) {
        this->ingredientFactory = ingredientFactory;
      }
      virtual void prepare() override {
        std::cout << "Preparing PepperoniPizza... " << name << std::endl;
        sauce = ingredientFactory->createSauce();
      }
    private:
      std::shared_ptr<PizzaIngredientFactory> ingredientFactory;
  };

  class PizzaStore {
    public:
      std::shared_ptr<Pizza> order(std::string name) {
        return create(name);
      }
      virtual std::shared_ptr<Pizza> create(std::string name) = 0;
  };
  class NYPizzaStore: public PizzaStore {
    public:
      virtual std::shared_ptr<Pizza> create(std::string name) {
        std::shared_ptr<Pizza> pizza;
        std::shared_ptr<PizzaIngredientFactory> ingredientFactory(new NYPizzaIngredientFactory());
        if(name == "Cheese") {
          pizza = std::shared_ptr<Pizza>(new CheesePizza(ingredientFactory));
          pizza->prepare();
          pizza->setName("New York Cheese Pizza");
        } else if(name == "Pepperoni") {
          pizza = std::shared_ptr<Pizza>(new PepperoniPizza(ingredientFactory));
          pizza->prepare();
          pizza->setName("New York Pepperoni Pizza");
        } else {
          pizza = nullptr;
        }
        return pizza;
      }
    };
  class ChicagoPizzaStore: public PizzaStore {
    public:
      virtual std::shared_ptr<Pizza> create(std::string name) {
        std::shared_ptr<Pizza> pizza;
        std::shared_ptr<PizzaIngredientFactory> ingredientFactory(new ChicagoPizzaIngredientFactory());
        if(name == "Cheese") {
          pizza = std::shared_ptr<Pizza>(new CheesePizza(ingredientFactory));
          pizza->prepare();
          pizza->setName("Chicago Cheese Pizza");
        } else if(name == "Pepperoni") {
          pizza = std::shared_ptr<Pizza>(new PepperoniPizza(ingredientFactory));
          pizza->prepare();
          pizza->setName("Chicago Pepperoni Pizza");
        } else {
          pizza = nullptr;
        }
        return pizza;
      }
  };
}