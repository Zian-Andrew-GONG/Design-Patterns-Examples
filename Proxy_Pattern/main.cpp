#include "Proxy.h"

int main() {
  auto image = std::shared_ptr<Image>(new ProxyImage());
  image->display();
  return 0;
}