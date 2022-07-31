#include "Observer.h"
#include <set>
#include <memory>
#pragma once

class Subject {
  public:
    virtual void registerObserver(std::shared_ptr<Observer> obs);
    virtual void removeObserver(std::shared_ptr<Observer> obs);
    virtual void notifyObserver();
    virtual void setState(double temperature) = 0;
    virtual ~Subject() = default;
    Subject() = default;
  protected:
    std::set<std::shared_ptr<Observer>> m_observer_set;
    double m_temperature, m_humidity, m_pressure;
};

class Temperature : public Subject {
  public:
    Temperature(double t) { m_temperature = t; }
    virtual void setState(double temperature);
};

class Pressure : public Subject {
  public:
    Pressure(double p) { m_pressure = p; }
    virtual void setState(double pressure);
};

class Humidity : public Subject {
  public:
    Humidity(double h) { m_humidity = h; }
    virtual void setState(double humidity);
};
