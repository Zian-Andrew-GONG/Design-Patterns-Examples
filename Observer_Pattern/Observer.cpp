#include "Observer.h"
#include <iostream>

void TemperatureObserver::display() {
  std::cout << "- Temperature Observer display -" << "\n"
            << "The Temperature is " << m_temperature << std::endl;
}

void TemperatureObserver::update(double temperature, double humidity, double pressure) {
  m_temperature = temperature;  
}

void HumidityObserver::display() {
  std::cout << "- Humidity Observer display -" << "\n"
            << "The Humidity is " << m_humidity << std::endl;
}

void HumidityObserver::update(double temperature, double humidity, double pressure) {
  m_humidity = humidity;
}