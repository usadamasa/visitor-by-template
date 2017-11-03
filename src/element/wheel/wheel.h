//
//

#ifndef VISITOR_BY_TEMPLATE_ELEMENT_WHEEL_H
#define VISITOR_BY_TEMPLATE_ELEMENT_WHEEL_H

#include <vector>

#include "element/car.h"

namespace element {
namespace wheel {

class Wheel : public CarElement {
 public:
  void accept(visitor::Visitor &visitor) const override;
};

}  // namespace wheel
}  // namespace element

#endif  // VISITOR_BY_TEMPLATE_ELEMENT_WHEEL_H
