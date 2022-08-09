#include <memory>
#include <iostream>
#include <string>
#include <vector>
#include <array>

class Object {
  public:
    Object(const std::string& s): name(s) {}
    Object() = default;
    void getName() {
      std::cout << name << std::endl;
    }
  private:
    std::string name;
};

class Iterator {
  public:
    virtual bool hasNext() = 0;
    virtual Object next() = 0;
    virtual ~Iterator() = default;
};

class Aggregate {
  public:
    virtual std::shared_ptr<Iterator> createIterator() = 0;
    virtual ~Aggregate() = default;
};

class ConcreteIterator_1: public Iterator {
  public:
    ConcreteIterator_1(std::vector<Object> vec): obj_vec(vec) {}
    virtual bool hasNext() override {
      if(i < obj_vec.size()) {
        return true;
      } else {
        return false;
      }
    }
    virtual Object next() override {
      return obj_vec[i++];
    }
  private:
    std::vector<Object> obj_vec;
    size_t i = 0;
};

class ConcreteAggregate_1: public Aggregate {
  public:
    ConcreteAggregate_1(std::vector<std::string> vec) {
      for(auto item : vec) {
        obj_vec.push_back(Object(item));
      }
    }
    virtual std::shared_ptr<Iterator> createIterator() override {
      auto iter = std::shared_ptr<Iterator>(new ConcreteIterator_1(this->obj_vec));
      return iter;
    }
    std::vector<Object> getContainer() {
      return obj_vec;
    }
  private:
    std::vector<Object> obj_vec;
};
