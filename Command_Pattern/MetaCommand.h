#include <memory>
#include <iostream>
#include <vector>

namespace MC {
  class Command {
    public:
      virtual void execute() = 0;
      virtual ~Command() = default;
  };

  class LightOnCommand: public Command {
    public:
      virtual void execute() override {
        std::cout << "Light On!" << std::endl;
      }
  };

  class LightOffCommand: public Command {
    public:
      virtual void execute() override {
        std::cout << "Light Off!" << std::endl;
      }
  };
  class DoorOpenCommand: public Command {
    public:
      virtual void execute() override {
        std::cout << "Door Open!" << std::endl;
      }
  };

  class DoorCloseCommand: public Command {
    public:
      virtual void execute() override {
        std::cout << "Door Close!" << std::endl;
      }
  };

  class RemoteControl {
    public:
      RemoteControl(int num) {
        for(int i = 0; i < num; i++) {
          onCommand.push_back(nullptr);
          offCommand.push_back(nullptr);
        }
      }
      void setCommand(int slot, std::shared_ptr<Command> onCommand, 
                      std::shared_ptr<Command> offCommand) {
        this->onCommand[slot] = onCommand;
        this->offCommand[slot] = offCommand;
      }
      void onExecute(int slot) {
        if(onCommand[slot] != nullptr)
          onCommand[slot]->execute();
        else std::cout << "onCommand not setted" << std::endl;
      }
      void offExecute(int slot) {
        if(offCommand[slot] != nullptr)
          offCommand[slot]->execute();
        else std::cout << "offCommand not setted" << std::endl;
      }
    private:  
      std::shared_ptr<Command> command;
      std::vector<std::shared_ptr<Command>> onCommand;
      std::vector<std::shared_ptr<Command>> offCommand;
  };
}

std::vector<int> list(7,3);