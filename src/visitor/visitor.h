#ifndef VISITOR_BY_TEMPLATE_VISITOR_H
#define VISITOR_BY_TEMPLATE_VISITOR_H

namespace visitor {
class Visitor {
 public:
  virtual ~Visitor(){};

  template <typename E>
  void visit(const E&);
};
}  // namespace visitor
#endif  // VISITOR_BY_TEMPLATE_VISITOR_H
