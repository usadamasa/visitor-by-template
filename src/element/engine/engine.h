#ifndef VISITOR_BY_TEMPLATE_ELEMENT_ENGINE_ENGINE_H
#define VISITOR_BY_TEMPLATE_ELEMENT_ENGINE_ENGINE_H

#include "element/car.h"
#include "visitor/visitor.h"

namespace element {
namespace engine {
class Engine : public CarElement {
 public:
  void accept(visitor::Visitor &visitor) const override;
};
}  // namespace engine
}  // namespace element

#endif  // VISITOR_BY_TEMPLATE_ELEMENT_ENGINE_ENGINE_H
