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
    for (int i=0; i<65536; i++)
    {
        assert(isPalindrome(i) == isPalindrome_fast(i));
    }

    assert(isPalindrome(121));
    assert(isPalindrome_fast(121));
    assert(isPalindrome(121));
    assert(isPalindrome_fast(121));
    assert(isPalindrome(12321));
    assert(isPalindrome_fast(12321));
    assert(isPalindrome(123454321));
    assert(isPalindrome_fast(123454321));
    assert(isPalindrome(123321));
    assert(isPalindrome_fast(123321));

    return 0;
}