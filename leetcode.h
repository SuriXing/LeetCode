#ifndef __LEETCODE_H__
#define __LEETCODE_H__

#include <stdbool.h>   // bool、true、false

int* twoSum(int nums[], int numsSize, int target, int* returnSize);
bool isPalindrome(int x);
bool isPalindromeFast(int x);
int mySqrt(int x);
int removeElement(int* nums, int numsSize, int val);
int removeElementFast(int* nums, int numsSize, int val);
int removeDuplicates(int* nums, int numsSize);
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

#endif // __LEETCODE_H__