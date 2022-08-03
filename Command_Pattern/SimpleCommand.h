#include <memory>
#include <iostream>

namespace SC {
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

  class SimpleRemoteControl {
    public:
      void setCommand(std::shared_ptr<Command> command) {
        this->command = command;
      }
      void execute() {
        command->execute();
      }
    private:
      std::shared_ptr<Command> command;
  };
}