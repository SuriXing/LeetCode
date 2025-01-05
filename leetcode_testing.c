#include <stdio.h>
#include <assert.h>
#include "leetcode.h"
#include "leetcode_testing.h"

bool twoSumTesting()
{
    return 0;
}

bool isPalindromeTesting()
{
    for (int i=0; i<65536; i+=8)
    {
        assert(isPalindrome(i) == isPalindrome_fast(i));
    }

    // True case
    assert(isPalindrome(121));
    assert(isPalindrome_fast(121));
    assert(isPalindrome(121));
    assert(isPalindrome_fast(121));
    assert(isPalindrome(12321));
    assert(isPalindrome_fast(12321));
    assert(isPalindrome(123454321));
    assert(isPalindrome_fast(123454321));
    assert(isPalindrome(123321));
    assert(isPalindrome(123321));
    assert(isPalindrome_fast(123321));

    // False case
    assert(!isPalindrome(123));
    assert(!isPalindrome_fast(123));
    assert(!isPalindrome(123456));
    assert(!isPalindrome_fast(123456));
    assert(!isPalindrome(54321));
    assert(!isPalindrome_fast(54321));
    assert(!isPalindrome(1232));
    assert(!isPalindrome_fast(1232));
    assert(!isPalindrome(999998));
    assert(!isPalindrome_fast(999998));

    return 0;
}

bool mySqrtTesting()
{
    return 0;
}

bool removeElementTesting()
{
    return 0;
}