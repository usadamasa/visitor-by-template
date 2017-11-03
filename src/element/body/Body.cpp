#include "body.h"

#include "visitor/visitor.h"

namespace element {
namespace body {

Body::Body() : wheels_(4) {}

void Body::accept(visitor::Visitor &visitor) const {
  visitor.visit(*this);

  for (const auto &w : this->wheels_) {
    w.accept(visitor);
  }
}

}  // namespace body
}  // namespace element
