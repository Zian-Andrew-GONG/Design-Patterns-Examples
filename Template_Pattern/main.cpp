/* 
 * 模板方法定义一个算法的步骤，允许子类提供一个或多个步骤的实现
 */
#include "Template.h"
#include <memory>

int main() {
  auto job = std::shared_ptr<Process>(new JobProcess());
  auto map = std::shared_ptr<Process>(new MapProcess());
  job->process();
  map->process();
  return 0;
}