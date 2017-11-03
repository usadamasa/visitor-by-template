#ifndef VISITOR_BY_TEMPLATE_ELEMENT_CAR_CAR_H
#define VISITOR_BY_TEMPLATE_ELEMENT_CAR_CAR_H

#include "element/body/body.h"
#include "element/car.h"
#include "element/engine/engine.h"

namespace element {
namespace car {

class Car : public CarElement {
 public:
  void accept(visitor::Visitor &visitor) const override;

 private:
  engine::Engine engine_;
  body::Body body_;
};

}  // namespace car
}  // namespace element

#endif  // VISITOR_BY_TEMPLATE_ELEMENT_CAR_CAR_H
