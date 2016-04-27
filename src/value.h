// -*- Mode: C++ -*-
#include "mapbox_variant/variant.hpp"

#include <cstdint>
#include <string>
#include <vector>
#include <unordered_map>

#ifndef __LIGHTSTEP_VALUE_H__
#define __LIGHTSTEP_VALUE_H__

namespace lightstep {
  
class Value;

typedef std::unordered_map<std::string, Value> Dictionary;
typedef std::vector<Value> Values;
typedef mapbox::util::variant<bool,
			      double,
			      int64_t,
			      uint64_t,
			      std::string,
			      std::nullptr_t,
			      Values,
			      Dictionary> variant_type;  

class Value : public variant_type {
public:
  template <typename T>
  Value(T&& t) : variant_type(t) { }
  
private:

};

} // namespace lighstep

#endif // __LIGHTSTEP_VALUE_H__
