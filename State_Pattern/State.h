#include <memory>
#include <iostream>

class State {
  public:
    virtual void doAction() = 0;
    virtual ~State() = default;
};

class StartState: public State {
  public:
    virtual void doAction() override {
      std::cout << "Start state ..." << std::endl;
    }
};

class StopState: public State {
  public:
    virtual void doAction() override {
      std::cout << "Stop state ..." << std::endl;
    }
};

class Context {
  public:
    void setState(std::shared_ptr<State> ptr) {
      state = ptr;
    }
    auto getState() {
      return state;
    }
    void doAction() {
      state->doAction();
    }
  private:
    std::shared_ptr<State> state = nullptr;
};