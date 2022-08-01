#include "SimpleFactory.h"
#include "FactoryMethod.h"
#include "AbstractFactory.h"

int main(){
  {
    using namespace SF;
    auto pizza_store = std::shared_ptr<PizzaStore>(new PizzaStore());
    auto pizza = pizza_store->order("Cheese");
    pizza->discription();
  }
  std::cout << std::endl;
  {
    using namespace FM;
    auto NY_pizza_store = std::shared_ptr<PizzaStore>(new NYPizzaStore());
    auto CHI_pizza_store = std::shared_ptr<PizzaStore>(new ChicagoPizzaStore());
    auto ny_cheese_pizza = NY_pizza_store->order("Cheese");
    ny_cheese_pizza->discription();
    auto chi_pepperoni_pizza = CHI_pizza_store->order("Pepperoni");
    chi_pepperoni_pizza->discription();
  }
  std::cout << std::endl;
  {
    using namespace AF;
    auto NY_pizza_store = std::shared_ptr<PizzaStore>(new NYPizzaStore());
    auto CHI_pizza_store = std::shared_ptr<PizzaStore>(new ChicagoPizzaStore());

    auto ny_cheese_pizza = NY_pizza_store->order("Cheese");
    ny_cheese_pizza->description();
    auto chi_cheese_pizza = CHI_pizza_store->order("Cheese");
    chi_cheese_pizza->description();

    auto ny_pepperoni_pizza = NY_pizza_store->order("Pepperoni");
    ny_pepperoni_pizza->description();
    auto chi_pepperoni_pizza = CHI_pizza_store->order("Pepperoni");
    chi_pepperoni_pizza->description();
  }

  return 0;
}