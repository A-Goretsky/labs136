#include <iostream>
#include <string>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.hpp"
#include "../doctest/doctest/doctest.h"

TEST_CASE("sumRange") {
    CHECK_EQ(sumRange(1, 3), 6);
    CHECK_EQ(sumRange(-5, 3), -9);
    CHECK_EQ(sumRange(-2, 10), 52);
    CHECK_EQ(sumRange(0, 6), 21);
}

TEST_CASE("sumArray") {
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[9] = {-5, -4, -3, -2, -1, 53, 75, 32, -53};
    int arr3[13] = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr4[7] = {5, 7, -4, 6, -3, 8, 9};
    CHECK_EQ(sumArray(arr1, 10), 55);
    CHECK_EQ(sumArray(arr2, 9), 92);
    CHECK_EQ(sumArray(arr3, 13), 52);
    CHECK_EQ(sumArray(arr4, 7), 28);
}
     
TEST_CASE("isAlphanumeric") {
    CHECK_EQ(isAlphanumeric("ABCD"), 1);
    CHECK_EQ(isAlphanumeric("ABCdef123xyz"), 1);
    CHECK_EQ(isAlphanumeric("klmn s"), 0);
    CHECK_EQ(isAlphanumeric("klm 8&-"), 0);
    CHECK_EQ(isAlphanumeric("&12324"), 0);
    CHECK_EQ(isAlphanumeric("1k#ml%,"), 0);
    CHECK_EQ(isAlphanumeric("1d34f4kj5k6v7l8a9x0"), 1);
}

TEST_CASE("nestedParens") {
    CHECK_EQ(nestedParens("()"), 1);
    CHECK_EQ(nestedParens("())"), 0);
    CHECK_EQ(nestedParens(")("), 0);
    CHECK_EQ(nestedParens("())(") , 0);
    CHECK_EQ(nestedParens("((()()))"), 0);
    CHECK_EQ(nestedParens("(((())))"), 1);
}

TEST_CASE("divisible") {
    int prices[9] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
    int nums1[2] = {2, 2};
    int nums2[1] = {1};
    int nums3[2] = {2, 3};
    int nums4[7] = {10, 20, 5, 5, 7, 7, 6};
    int nums5[0] = {};
    CHECK_EQ(divisible(prices, 9), 1);
    CHECK_EQ(divisible(nums1, 2), 1);
    CHECK_EQ(divisible(nums2, 1), 0);
    CHECK_EQ(divisible(nums3, 2), 0);
    CHECK_EQ(divisible(nums4, 7), 1);
    CHECK_EQ(divisible(nums5, 0), 1);
}
