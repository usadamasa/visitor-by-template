//
//

#ifndef _VISITOR_BY_TEMPLATE_ELEMENT_BODY_BODY_H_
#define _VISITOR_BY_TEMPLATE_ELEMENT_BODY_BODY_H_

#include "element/car.h"
#include "element/wheel/wheel.h"

namespace element {
namespace body {
class Body : public CarElement {
 public:
  Body();
  void accept(visitor::Visitor &visitor) const override;

 private:
  std::vector<wheel::Wheel> wheels_;
};

}  // namespace body
}  // namespace element

#endif  //  _VISITOR_BY_TEMPLATE_ELEMENT_BODY_BODY_H_
