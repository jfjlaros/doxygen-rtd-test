#ifndef __SIMPLE_RPC_PRINT_TCC__
#define __SIMPLE_RPC_PRINT_TCC__

#include <Arduino.h>
#include <avr/pgmspace.h>

#define _END_OF_STRING '\0'


/*
 * Prototypes needed for recursive definitions.
 */
template<class T, class... Args>
  size_t multiPrint(T, Args...);
template<class... Args>
  size_t multiPrint(const __FlashStringHelper *, Args...);


/**
 * Recursion terminator for {multiPrint()}.
 */
inline size_t multiPrint(void) {
  return 0;
}

/**
 * Write a list of parameters to serial.
 *
 * @arg {T} arg - Parameter to be printed.
 * @arg {Args...} args... - Remaining parameters.
 *
 * @return {size_t} - Number of bytes written.
 */
template<class T, class... Args>
size_t multiPrint(T arg, Args... args) {
  return Serial.write(arg) + multiPrint(args...);
}

// F() macro support.
template<class... Args>
size_t multiPrint(const __FlashStringHelper *arg, Args... args) {
  return Serial.print(arg) + multiPrint(args...);
}

#endif