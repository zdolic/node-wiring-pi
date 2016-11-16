#include "addon.h"
#include <stdarg.h>
#include <strings.h>
#include <algorithm>

bool find_string(const char* string, const char* array[], size_t s) {
  for (size_t i = 0; i < s; i++) {
    if (!strcasecmp(string, array[i])) {
      return true;
    }
  }
  return false;
}

bool find_int(const int value, const int array[]) {
  return std::any_of(std::begin(array), std::end(array), [](int const n){return n==value;});
}


void throw_error(const char* format, ...) {
  char buffer[256];
  va_list args;
  va_start(args, format);
  vsnprintf(buffer, 156, format, args);
  va_end(args);

  Nan::ThrowError(Nan::New<String>(buffer).ToLocalChecked());
}
