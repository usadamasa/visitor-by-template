#include "wheel.h"

#include "visitor/visitor.h"

namespace element {
namespace wheel {
void Wheel::accept(visitor::Visitor &visitor) const { visitor.visit(*this); }
}  // namespace wheel
}  // namespace element
