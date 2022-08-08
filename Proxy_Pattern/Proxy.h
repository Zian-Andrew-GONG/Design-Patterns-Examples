#include <memory>
#include <iostream>

class Image {
  public:
    virtual void display() = 0;
};

class RealImage: public Image {
  public:
    virtual void display() override {
      std::cout << "Display ..." << std::endl;
    }
};

class ProxyImage: public Image {
  public:
    virtual void display() override {
      if(real_image == nullptr) {
        real_image = std::shared_ptr<Image>(new RealImage());
      }
      real_image->display();
    }
  private:
    std::shared_ptr<Image> real_image = nullptr;
};

