#include <memory>
#include <iostream>

namespace Facade {
  class Unit1 {
    public: 
    void process_1() {
      std::cout << "Unit1 process 1" << std::endl;
    }
    void process_2() {
      std::cout << "Unit1 process 2" << std::endl;
    }
    void process_3() {
      std::cout << "Unit1 process 3" << std::endl;
    }
  };
  class Unit2 {
    public: 
    void process_1() {
      std::cout << "Unit2 process 1" << std::endl;
    }
    void process_2() {
      std::cout << "Unit2 process 2" << std::endl;
    }
    void process_3() {
      std::cout << "Unit2 process 3" << std::endl;
    }
  };
  class Unit3 {
    public: 
    void process_1() {
      std::cout << "Unit3 process 1" << std::endl;
    }
    void process_2() {
      std::cout << "Unit3 process 2" << std::endl;
    }
    void process_3() {
      std::cout << "Unit3 process 3" << std::endl;
    }
  };
  class Process {
    public:
      void process_1() {
        unit1.process_1();
        unit2.process_1();
        unit3.process_1();
      }
      void process_2() {
        unit1.process_2();
        unit2.process_2();
        unit3.process_2();
      }
      void process_3() {
        unit1.process_3();
        unit2.process_3();
        unit3.process_3();
      }
    private:
      Unit1 unit1;
      Unit2 unit2;
      Unit3 unit3;
  };
}