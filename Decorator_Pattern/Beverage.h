#include <string>
#pragma once

class Beverage {
  public:
    virtual std::string getDescription() {
      return m_description;
    }
    virtual double cost() = 0;
    virtual ~Beverage() = default;
  protected:
    std::string m_description = "Unkown Beverage";
};

class Espresso: public Beverage {
  public:
    Espresso() {
      m_description = "Espresso";
    }
    virtual double cost() override {
      return 1.99;
    }
};

class HouseBlend: public Beverage {
  public:
    HouseBlend() {
      m_description = "House Blend Coffe";
    }
    virtual double cost() override {
      return 0.89;
    }
};