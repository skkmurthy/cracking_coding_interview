#include <iostream>
#include <assert.h>
#include "util_funcs.h"
using namespace std;

/**
 * This is the main function. 
 */ 
int main (int argc, char *argv[])
{
    const char *str = "abcd";
    assert(check_unique_chars(str, strlen(str)));

    str = "aabcd";
    assert(!check_unique_chars(str, strlen(str)));

    return (0);
}

