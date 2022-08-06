#include <iostream>

class Process {
  public:
    virtual void process() {
      create();
      progress();
      done();
    }
    virtual void create() {
      std::cout << "create..." << std::endl;
    }
    virtual void progress() = 0;
    virtual void done() {
      std::cout << "done..." << std::endl;
    }
    virtual ~Process() = default;
};

class JobProcess: public Process {
  public:
    virtual void progress() override {
      std::cout << "job progress..." << std::endl;
    }
};

class MapProcess: public Process {
  public:
    virtual void progress() override {
      std::cout << "map progress..." << std::endl;
    }
};