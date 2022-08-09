#include <memory>
#include <string>
#include <vector>
#include <iostream>

class Component {
  public:
    virtual void operation() = 0;
    virtual void add(std::shared_ptr<Component> com) = 0;
    virtual void remove(std::shared_ptr<Component> com) = 0;
    virtual std::shared_ptr<Component> getChild(int i) = 0;
    virtual ~Component() = default;
};

class Composite: public Component {
  public:
    Composite(std::string s): name(s) {}
    virtual void operation() override {
      std::cout << name << std::endl;
    }
    virtual void add(std::shared_ptr<Component> com) override {
      com_vec.push_back(com);
    }
    virtual void remove(std::shared_ptr<Component> com) override {
      for(auto iter = com_vec.begin(); iter != com_vec.end(); iter++){
        if(*iter == com) {
          com_vec.erase(iter);
        }
      }
    }
    virtual std::shared_ptr<Component> getChild(int i) override {
      if(i < com_vec.size())
        return com_vec[i];
      else return nullptr;
    }
  private:
    std::vector<std::shared_ptr<Component>> com_vec;
    std::string name;
};