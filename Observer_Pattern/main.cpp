/* 
 * 观察者模式主要用于一对多的依赖关系。
 * 例如，当一个对象被修改时，则会自动通知依赖它的对象
 */

#include "Subject.h"
#include "Observer.h"
#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<Subject> temp(new Temperature(35.0));
  std::shared_ptr<Subject> pre(new Pressure(1.0)); /* 无人使用 */
  std::shared_ptr<Subject> hum(new Humidity(0.5));
  std::shared_ptr<Observer> temp_obs(new TemperatureObserver());
  std::shared_ptr<Observer> hum_obs(new HumidityObserver());

  temp->registerObserver(temp_obs);
  hum->registerObserver(hum_obs);
  temp->setState(37.0);
  hum->setState(2.0);
  return 0;
}