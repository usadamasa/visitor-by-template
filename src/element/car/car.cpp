#include "car.h"

namespace element {
namespace car {

void Car::accept(visitor::Visitor &visitor) const {
  visitor.visit(*this);

  this->engine_.accept(visitor);
  this->body_.accept(visitor);
};

}  // namespace car
}  // namespace element
