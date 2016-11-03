#include "util_funcs.h"
#include <set>
using namespace std;

// 1.1
// runtime complexity with hashmap - O(N)
bool check_unique_chars(const char *str, std::size_t len)
{
    if (len == 0 || str == NULL) {
        return true;
    }

    // use hashmap to have a O(1) access
    set<char> found_chars;

    // look at each of the chars in the array.
    for (size_t i = 0; i < len; ++i) {
        if (found_chars.end() != found_chars.find(str[i])) {
            // found a duplicate
            return false;
        } else {
            // add to found_chars
            found_chars.insert(str[i]);
        }
    }
    return true;
}
