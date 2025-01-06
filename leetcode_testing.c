#include <stdio.h>
#include <assert.h>
#include "leetcode.h"
#include "leetcode_testing.h"

static void printArray(int *arr, int length)
{
	for (int i=0; i<length-1; i++)
	{
		printf("%d,", arr[i]);
	}
	printf("%d\n", arr[length-1]);
}

bool twoSumTesting()
{
    return 0;
}

bool isPalindromeTesting()
{
    for (int i=0; i<65536; i+=8)
    {
        assert(isPalindrome(i) == isPalindromeFast(i));
    }

    // True case
    assert(isPalindrome(121));
    assert(isPalindromeFast(121));
    assert(isPalindrome(121));
    assert(isPalindromeFast(121));
    assert(isPalindrome(12321));
    assert(isPalindromeFast(12321));
    assert(isPalindrome(123454321));
    assert(isPalindromeFast(123454321));
    assert(isPalindrome(123321));
    assert(isPalindrome(123321));
    assert(isPalindromeFast(123321));

    // False case
    assert(!isPalindrome(123));
    assert(!isPalindromeFast(123));
    assert(!isPalindrome(123456));
    assert(!isPalindromeFast(123456));
    assert(!isPalindrome(54321));
    assert(!isPalindromeFast(54321));
    assert(!isPalindrome(1232));
    assert(!isPalindromeFast(1232));
    assert(!isPalindrome(999998));
    assert(!isPalindromeFast(999998));

    return 0;
}

bool mySqrtTesting()
{
    return 0;
}

bool removeElementTesting()
{
    int array[5] = {1,2,3,2,1};

	printArray(array, 5);
	removeElement(array, 5, 2);
	printArray(array, 5);

    return 0;
}