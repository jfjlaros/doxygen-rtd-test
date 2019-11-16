#include <iostream>

/// @defgroup print Print functions.

using namespace std;


/**
 * @fn test(H, Tail...)
 * @ingroup print
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
