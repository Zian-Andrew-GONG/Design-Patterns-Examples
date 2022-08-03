#include <memory>
#include <iostream>

class Singleton {
  public:
    static std::shared_ptr<Singleton> getSingleton() {
      if(singleton == nullptr) {
        std::cout << "Generating a Singleton" << std::endl;
        singleton = std::shared_ptr<Singleton>(new Singleton());
      } else {
        std::cout << "Already have a Singleton" << std::endl;
      }
      return singleton;
    }
    void print() {
      std::cout << "This is a Singleton" << std::endl;
    }
  private:
    Singleton(){}
    static std::shared_ptr<Singleton> singleton;
};

std::shared_ptr<Singleton> Singleton::singleton = nullptr;