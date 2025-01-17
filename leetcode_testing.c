#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "leetcode.h"
#include "leetcode_testing.h"

#define SIZEOFARRAY(arr) (sizeof(arr)/sizeof(arr[0]))

static void printIntArray(int *arr, int length)
{
	for (int i=0; i<length-1; i++)
	{
		printf("%d,", arr[i]);
	}
	printf("%d\n", arr[length-1]);
}

static void resetRestOfArray(int *arr, int length, int indexOfReset)
{
    if (length < indexOfReset)
    {           
        return;
    }

    for (int i=indexOfReset; i<length; i++)
    {    
        arr[i] = 0;
    }
}

static bool compareIntArray(int *arr1, int len1, int *arr2, int len2)
{
    if (len1 != len2)
    {
        return false;
    }

    for (int i=0; i<len1; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }

    return true;
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
    int array1[] = {1,2,3,2,1, 5, 3, 3, 6, 5, 5, 6, 3, 4, 7, 8, 7, 6, 5, 7, 4, 3, 3, 5, 2, 3, 2, 4, 3};
    int array2[] = {1,2,3,2,1, 5, 3, 3, 6, 5, 5, 6, 3, 4, 7, 8, 7, 6, 5, 7, 4, 3, 3, 5, 2, 3, 2, 4, 3};
    int newLen1 = 0;
    int newLen2 = 0;

    for (int i=0; i<10; i++)
    {
        printIntArray(array1, SIZEOFARRAY(array1));
        printIntArray(array2, SIZEOFARRAY(array2));

        newLen1 = removeElement(array1, SIZEOFARRAY(array1), i);
        newLen2 = removeElementFast(array2, SIZEOFARRAY(array2), i);
        
        assert(newLen1 == newLen2);
        assert(compareIntArray(array1, newLen1, array2, newLen2));

        resetRestOfArray(array1, SIZEOFARRAY(array1), newLen1);
        resetRestOfArray(array2, SIZEOFARRAY(array2), newLen2);
    }

    return 0;
}

bool removeDuplicatesTesting()
{
    return 0;
}

bool mergeTesting()
{
    return 0;
}

bool longestCommonPrefixTesting()
{
	char* strs[3] = {"flower","flow","flight"};

	assert(strcmp(longestCommonPrefix(strs, 3), longestCommonPrefix2(strs, 3)) == 0);
    assert(strcmp(longestCommonPrefix(strs, 3), "fl") == 0);

	char* strs2[5] = {"dog","dacecar", "dar", "beetle", "dob"};

    assert(strcmp(longestCommonPrefix(strs2, 5), longestCommonPrefix2(strs2, 5)) == 0);
    assert(strcmp(longestCommonPrefix(strs2, 5), "") == 0);

    char* strs3[4] = {"fish", "fishing", "freeze", "flash"};

    assert(strcmp(longestCommonPrefix(strs3, 4), longestCommonPrefix2(strs3, 4)) == 0);
    assert(strcmp(longestCommonPrefix(strs3, 4), "f") == 0);

    char* strs4[3] = {"cheese", "catch", "code"};

    assert(strcmp(longestCommonPrefix(strs4, 3), longestCommonPrefix2(strs4, 3)) == 0);
    assert(strcmp(longestCommonPrefix(strs4, 3), "c") == 0);

    char* strs5[5] = {"apple", "banana", "cat", "dog", "egg"};

    assert(strcmp(longestCommonPrefix(strs5, 5), longestCommonPrefix2(strs5, 5)) == 0);
    assert(strcmp(longestCommonPrefix(strs5, 5), "") == 0);

    char* strs6[3] = {"cat", "cats", "catss"};

    assert(strcmp(longestCommonPrefix(strs6, 3), longestCommonPrefix2(strs6, 3)) == 0);
    assert(strcmp(longestCommonPrefix(strs6, 3), "cat") == 0);

    return true;
}