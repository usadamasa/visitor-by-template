#include "engine.h"

#include "visitor/visitor.h"

namespace element {
namespace engine {
void Engine::accept(visitor::Visitor &visitor) const { visitor.visit(*this); }
}  // namespace engine
}  // namespace element
