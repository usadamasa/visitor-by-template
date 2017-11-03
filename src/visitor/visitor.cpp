#include "visitor.h"

#include <iostream>

#include "element/body/body.h"
#include "element/car/car.h"
#include "element/engine/engine.h"
#include "element/wheel/wheel.h"

namespace visitor {
template <>
void Visitor::visit<element::wheel::Wheel>(const element::wheel::Wheel &wheel) {
  std::cout << "Visiting Wheel" << std::endl;
}
template <>
void Visitor::visit<element::body::Body>(const element::body::Body &body) {
  std::cout << "Visiting Body" << std::endl;
}
template <>
void Visitor::visit<element::car::Car>(const element::car::Car &car) {
  std::cout << "Visiting Car" << std::endl;
}
template <>
void Visitor::visit<element::engine::Engine>(
    const element::engine::Engine &engine) {
  std::cout << "Visiting Engine" << std::endl;
}
}  // namespace visitor
