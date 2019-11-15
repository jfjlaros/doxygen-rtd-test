#include <iostream>

/// @file

using namespace std;


/**
 * @fn test(H, Tail...)
 *
 * Some text here with *markdown* **a**. `--`
 */

/// Terminator for test.
inline void test(void) {}

/// Main test function.
template <class H, class... Tail>
void test(H head, Tail... tail) {
  cout << head;
  test(tail...);
}


/// @private
int main(void) {
  test("Hi ", "there.", "\n");

  return 0;
}
