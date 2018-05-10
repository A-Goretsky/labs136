#include <iostream>
#include <string>
#include "funcs.hpp"

int main() {
    //printRange tests
    printRange(-2, 10);
    printRange(-2, -2);
    printRange(4, -5); //should print nothing at all
    printRange(-11, -3);

    std::cout << "~~~~~~~~~~~~~~~~~~\n";
    std::cout << sumRange(1, 3) << "\n";
    std::cout << sumRange(-5, 3) << "\n";
    std::cout << sumRange(-2, 10) << "\n";
    std::cout << "~~~~~~~~~~~~~~~~~~\n";
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << sumArray(arr, 10) << "\n";
    std::cout << "~~~~~~~~~~~~~~~~~~\n";
    std::cout << isAlphanumeric("ABCD") << "\n";
    std::cout << isAlphanumeric("ABCdef123xyz") << "\n";
    std::cout << isAlphanumeric("klmn s") << "\n";
    std::cout << isAlphanumeric("klm 8&-") << "\n";
    std::cout << isAlphanumeric("&12324") << "\n";
    //std::string s = "ABCD";
    //std::cout << s.substr(2);
    std::cout << "~~~~~~~~~~~~~~~~~~\n";
    std::cout << nestedParens("()") << "\n";
    std::cout << nestedParens("())") << "\n";
    std::cout << nestedParens(")(") << "\n";
    std::cout << nestedParens("())(") << "\n";
    std::cout << nestedParens("((()()))") << "\n";
    std::cout << nestedParens("(((())))") << "\n";
    std::cout << "~~~~~~~~~~~~~~~~~~\n";
    int prices[9] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
    int nums1[2] = {2, 2};
    int nums2[1] = {1};
    int nums3[2] = {2, 3};
    std::cout << divisible(prices, 9) << "\n"; 
    std::cout << divisible(nums1, 2) << "\n"; 
    std::cout << divisible(nums2, 2) << "\n";
    std::cout << divisible(nums3, 2) << "\n";  
}