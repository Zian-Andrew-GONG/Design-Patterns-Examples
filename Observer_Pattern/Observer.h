#include <set>
#include <memory>
#pragma once

class Observer {
  public:
    virtual void display() = 0;
    virtual void update(double temperature, double humidity, double pressure) = 0;
    virtual ~Observer() = default;
};

class TemperatureObserver : public Observer {
  public:
    virtual void display();
    virtual void update(double temperature, double humidity, double pressure);
  private:
    double m_temperature = 0;
};

class HumidityObserver : public Observer {
  public:
    virtual void display();
    virtual void update(double temperature, double humidity, double pressure);
  private:
    double m_humidity = 0;
};