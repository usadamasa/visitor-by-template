#include <iostream>
#include <vector>

#include "element/car/car.h"
#include "visitor/visitor.h"

int main() {
  element::car::Car car;
  visitor::TestVisitor visitor;
  car.accept(visitor);
}
