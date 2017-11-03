#ifndef VISITOR_BY_TEMPLATE_ELEMENT_CAR_H
#define VISITOR_BY_TEMPLATE_ELEMENT_CAR_H

namespace visitor {
class Visitor;
}

namespace element {

class CarElement {
 public:
  CarElement() {}
  virtual ~CarElement() {}
  virtual void accept(visitor::Visitor &) const = 0;
};

}  // namespace element

#endif  // VISITOR_BY_TEMPLATE_ELEMENT_CAR_H
