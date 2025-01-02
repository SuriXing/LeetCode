#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>   // bool、true、false
#include "leetcode_testing.h"

/** 
 * #1 -- Two Sum
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int nums[], int numsSize, int target, int* returnSize)
{
    int* array = (int*)malloc(2*sizeof(int));
    array[0] = array[1] = 0;

    if ((NULL == nums) || (numsSize < 0) || (NULL == returnSize))
    {
        return NULL;
    }

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (target - nums[i] == nums[j])
            {
                array[0] = i;
                array[1] = j;
                *returnSize = 2;
                return array;
            }
        }
    }
    return array;
}

/** 
 * #9 -- Palindrome
 * Given an integer x, return true if x is a palindrome, and false otherwise.
 */
bool isPalindrome(int x) 
{
    if (x < 0)
    {
        return false;
    }

    int array[32] = {0};
    int count = 0;

    while (x > 0)
    {
        array[count] = x % 10;
        x = x / 10;
        count++;
    }

    int front = 0;
    int back = count - 1;

    while (front < back)
    {
        if (array[front] != array[back])
        {
            return false;
        }
        front++;
        back--;
    }

    return true;
}

int main()
{
	twoSumTesting();
	isPalindromeTesting();

	return 0;
}
