#ifndef QAED_BASIC_HEAP_H
#define QAED_BASIC_HEAP_H 

#include <cstdlib>
#include <iostream>

namespace qaed {

template <class Type>
class Heap {
public: 
  Heap()          = default;
  virtual ~Heap() = default;

  using value_type = Type;
  using reference = Type&;
  using const_reference = Type const&;
  using Size = std::size_t;

  virtual void            add(const Type& data)    = 0;
  virtual void            remove(const Type& data) = 0;
  virtual void            remove_top()             = 0;
  virtual const_reference get_top()                = 0;

  virtual Size size() = 0;
  virtual bool empty() = 0;

  virtual void print(std::ostream& out = std::cout) const = 0;
  virtual void graph(const char* filename, bool xdgopen = false) = 0;
};

}

#endif 
