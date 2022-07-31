#include "Beverage.h"
#include <string>
#include <memory>
#pragma once

class CondimentDecorator: public Beverage {
  public:
    virtual std::string getDescription() = 0;
    virtual ~CondimentDecorator() = default;
  protected:
    std::shared_ptr<Beverage> m_beverage_ptr;
};

class Mocha: public CondimentDecorator {
  public:
    Mocha(std::shared_ptr<Beverage> beverage_ptr) {
      m_beverage_ptr = beverage_ptr;
    }
    virtual std::string getDescription() override {
      return m_beverage_ptr->getDescription() + ", Mocha";
    }
    virtual double cost() override {
      return m_beverage_ptr->cost() + 0.2;
    }
};

class Milk: public CondimentDecorator {
  public:
    Milk(std::shared_ptr<Beverage> beverage_ptr) {
      m_beverage_ptr = beverage_ptr;
    }
    virtual std::string getDescription() override {
      return m_beverage_ptr->getDescription() + ", Milk";
    }
    virtual double cost() override {
      return m_beverage_ptr->cost() + 0.5;
    }
};

