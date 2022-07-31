#include "Subject.h"

void Subject::registerObserver(std::shared_ptr<Observer> obs_ptr) {
  m_observer_set.insert(obs_ptr);
}

void Subject::removeObserver(std::shared_ptr<Observer> obs_ptr) {
  m_observer_set.erase(obs_ptr);
}

void Subject::notifyObserver() {
  for(auto obs_ptr : m_observer_set) {
    obs_ptr->update(m_temperature, m_humidity, m_pressure);
    obs_ptr->display();
  }
}

void Temperature::setState(double temperatue) {
  m_temperature = temperatue;
  notifyObserver();
}

void Pressure::setState(double pressure) {
  m_pressure = pressure;
  notifyObserver();
}

void Humidity::setState(double humidity) {
  m_humidity = humidity;
  notifyObserver();
}


