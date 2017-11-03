#include "visitor.h"

#include <iostream>

#include "element/body/body.h"
#include "element/car.h"
#include "element/car/car.h"
#include "element/engine/engine.h"
#include "element/wheel/wheel.h"

namespace visitor {
void TestVisitor::visit(const element::wheel::Wheel &wheel) {
  std::cout << "Visiting Wheel" << std::endl;
}
void TestVisitor::visit(const element::body::Body &body) {
  std::cout << "Visiting Body" << std::endl;
}
void TestVisitor::visit(const element::car::Car &car) {
  std::cout << "Visiting Car" << std::endl;
}
void TestVisitor::visit(const element::engine::Engine &engine) {
  std::cout << "Visiting Engine" << std::endl;
}
}  // namespace visitor
