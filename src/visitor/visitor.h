#ifndef VISITOR_BY_TEMPLATE_VISITOR_H
#define VISITOR_BY_TEMPLATE_VISITOR_H

namespace element {
class Car;
namespace car {
class Car;
}
namespace body {
class Body;
}
namespace engine {
class Engine;
}
namespace wheel {
class Wheel;
}
}  // namespace element

namespace visitor {
class Visitor {
 public:
  virtual ~Visitor(){};

  virtual void visit(const element::wheel::Wheel &) = 0;
  virtual void visit(const element::engine::Engine &) = 0;
  virtual void visit(const element::body::Body &) = 0;
  virtual void visit(const element::car::Car &) = 0;
};

class TestVisitor : public Visitor {
 public:
  TestVisitor() = default;
  ~TestVisitor() override = default;

  void visit(const element::wheel::Wheel &) override;
  void visit(const element::engine::Engine &) override;
  void visit(const element::body::Body &) override;
  void visit(const element::car::Car &) override;
};

}  // namespace visitor
#endif  // VISITOR_BY_TEMPLATE_VISITOR_H
