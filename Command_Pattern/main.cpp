#include "SimpleCommand.h"
#include "MetaCommand.h"
#include <memory>

int main() {
  {
    using namespace SC;
    auto src = std::shared_ptr<SimpleRemoteControl>(new SimpleRemoteControl());
    auto light_on = std::shared_ptr<Command>(new LightOnCommand());
    src->setCommand(light_on);
    src->execute();
    auto light_off = std::shared_ptr<Command>(new LightOffCommand());
    src->setCommand(light_off);
    src->execute();
  }
  std::cout << std::endl;
  {
    using namespace MC;
    auto rc = std::shared_ptr<RemoteControl>(new RemoteControl(3));
    auto light_on = std::shared_ptr<Command>(new LightOnCommand());
    auto light_off = std::shared_ptr<Command>(new LightOffCommand());
    auto door_open = std::shared_ptr<Command>(new DoorOpenCommand());
    auto door_close = std::shared_ptr<Command>(new DoorCloseCommand());
    rc->setCommand(0, light_on, light_off);
    rc->setCommand(1, door_open, door_close);
    rc->onExecute(0);
    rc->offExecute(0);
    rc->onExecute(1);
    rc->offExecute(1);
    rc->onExecute(2);
    rc->offExecute(2);
  }
}