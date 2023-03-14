#pragma ONCE
#include <iostream>
#include <vector>

class enemy {

public:
  enemy(int bound, std::string model) {
    this->locationx = 0;
    this->locationy = 0;
    setchar(model);
    for (int i = 0; i < 10; i++) {
      health.push_back("❤️");
    }
    std::cout << std::endl;
  }

  void setchar(std::string val) { this->model = val; }

  void gethp() {
    std::cout << this->model << "HEALTH :" << std::endl;
    for (int i = 0; i < health.size(); i++) {
      std::cout << health[i];
    }
    std::cout << std::endl;
  }

  int getx() { return locationx; }

  int gety() { return locationy; }

  std::string getchar() { return this->model; }

  void up() {
    if (locationx != 0) {
      this->locationx--;
    }
  }
  void right() {
    if (locationy != boundy - 1) {
      this->locationy++;
    }
  }
  void left() {
    if (locationy != 0) {
      this->locationy--;
    }
  }
  void down() {
    if (locationx != boundx - 1) {
      this->locationx++;
    }
  }
  void setboundx(unsigned xbound) { this->boundx = xbound; }
  void setboundy(unsigned ybound) { this->boundy = ybound; }

private:
  std::vector<std::string> health;
  std::string model;
  int locationx;
  int locationy;
  unsigned int boundx;
  unsigned int boundy;
};
