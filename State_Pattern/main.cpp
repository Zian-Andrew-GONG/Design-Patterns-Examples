#include "State.h"

int main() {
  Context context;
  context.setState(std::shared_ptr<State>(new StartState()));
  context.doAction();
  context.setState(std::shared_ptr<State>(new StopState()));
  context.doAction();
  return 0;
}