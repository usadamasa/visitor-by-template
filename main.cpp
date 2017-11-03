#include <iostream>
#include <vector>

class Wheel;
class Engine;
class Body;
class Car;

class Visitor {
 public:
  Visitor() {}
  virtual ~Visitor() {}

  virtual void visit(Wheel &) = 0;
  virtual void visit(Engine &) = 0;
  virtual void visit(Body &) = 0;
  virtual void visit(Car &) = 0;
};

class TestVisitor : public Visitor {
 public:
  TestVisitor() : Visitor() {}
  virtual ~TestVisitor() {}

  virtual void visit(Wheel &wheel) {
    std::cout << "Visiting Wheel" << std::endl;
  }
  virtual void visit(Engine &engine) {
    std::cout << "Visiting Engine" << std::endl;
  }
  virtual void visit(Body &body) { std::cout << "Visiting Body" << std::endl; }
  virtual void visit(Car &car) { std::cout << "Visiting Car" << std::endl; }
};

class CarElement {
 public:
  CarElement() {}
  virtual ~CarElement() {}

  virtual void accept(Visitor &) = 0;
};

class Wheel : public CarElement {
 public:
  virtual void accept(Visitor &visitor) { visitor.visit(*this); }
};

class Engine : public CarElement {
 public:
  virtual void accept(Visitor &visitor) { visitor.visit(*this); }
};

class Body : public CarElement {
 public:
  virtual void accept(Visitor &visitor) {
    visitor.visit(*this);

    for (std::vector<Wheel>::iterator i = _wheels.begin(); i != _wheels.end();
         ++i) {
      i->accept(visitor);
    }
  }

 private:
  std::vector<Wheel> _wheels;
};

class Car : public CarElement {
 public:
  virtual void accept(Visitor &visitor) {
    visitor.visit(*this);

    _engine.accept(visitor);
    _body.accept(visitor);
  }

 private:
  Engine _engine;
  Body _body;
};

int main() {
  Car car;
  TestVisitor visitor;

  car.accept(visitor);
}
