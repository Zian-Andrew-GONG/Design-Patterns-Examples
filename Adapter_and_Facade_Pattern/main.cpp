#include "Adapter.h"
#include "Facade.h"

int main() {
  {
    using namespace Adapter;
    auto duck = std::shared_ptr<Duck>(new MallardDuck());
    duck->quack();
    duck->fly();
    auto turkey = std::shared_ptr<Turkey>(new WildTurkey());
    auto O_odd_duck = std::shared_ptr<Duck>(new O_TurkeyAdapter(turkey));
    O_odd_duck->quack();
    O_odd_duck->fly();
    auto C_odd_duck = std::shared_ptr<Duck>(new C_WildTurkeyAdapter());
    C_odd_duck->quack();
    C_odd_duck->fly();
    // auto C_odd_duck = std::shared_ptr<Duck>(new C_TurkeyAdapter());
    // C_odd_duck->quack();
    // C_odd_duck->fly();
  }
  std::cout << std::endl;
  {
    using namespace Facade;
    auto process = Process();
    process.process_1();
    process.process_2();
    process.process_3();
  }
  return 0;
}