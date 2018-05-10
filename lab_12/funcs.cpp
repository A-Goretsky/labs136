#include <iostream>
#include <string>
#include "funcs.hpp"

void printRange(int left, int right) {
    if (left > right)
        return;
    else if (left == right) {
        std::cout << left;
        std::cout << "\n";
        return;
    }
    else {
        std::cout << left << " ";
        printRange(left + 1, right);
    }
}

int sumRange(int left, int right) {
    int res = 0;
    if (left > right)
        return res;
    else
        res = left + sumRange(left + 1, right);
    return res;
}

int sumArray(int *arr, int size) {
    int res = 0;
    if (size == 0)
        return res;
    else
        res = *arr + sumArray(arr + 1, size - 1);
    return res;
}

bool isAlphanumeric(std::string s) {
    bool res = true;
    if (s.empty())
        return res;
    else {
        res = isalnum(s[0]);
        if (res == false)
            return res;
        res = isAlphanumeric(s.erase(0, 1));
    }
    return res;
}

bool nestedParens(std::string s) {
    bool res = true;
    if (s.size() % 2 != 0)
        return false;
    if (s.empty())
        return res;
    else {
        if (!res)
            return res;
        res *= (s[0] == '(' && s.back() == ')');
        s.pop_back();
        res *= nestedParens(s.erase(0, 1));
    }
    return res;
}

bool divisible_actual(int *prices, int size, int first, int second) {
    if (size == 0)
        return first == second;
    else
        return divisible_actual(prices + 1, size - 1, first + *prices, second) || divisible_actual(prices + 1, size - 1, first, second + *prices);
}
bool divisible(int *prices, int size) {
    return divisible_actual(prices, size, 0, 0);
}
