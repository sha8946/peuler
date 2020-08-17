//////////////////////// 2020 Tyler Shamie /////////////////////////////////
//
//   Project     : Project Euler 04
//   File        : 04.cc
//   Description :
//      c++ solution to Problem 4 on projecteuler.net
//
//   Created On: 2020/05/24 at 08:09:13 PM EST
//   Created By: Tyler Shamie <mailto:tyler.shamie@gmail.com>
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

int revNum(int n) {
    int r = 0;

    while (n != 0){
        r = r * 10;
        r = r + (n % 10);
        n /= 10;
    }

    return r;
}

bool isPalin(int n) {
    if (revNum(n) == n) {
        return true;
    } else {
        return false;
    }
}

int vecMax(std::vector<int>* n) {
    int max = 0;
    std::vector<int> vec = *n;

    for (int i = 0; i < vec.size(); i++) {
        if (vec.at(i) > max) {
            max = vec.at(i);
        }
    }
    
    return max;
}

int main() {
    int max = 999;
    std::vector<int> palin;

    for (int i = max; i >= 100; i--) {
        for (int j = max; j >= 100; j--) {
            int mul = j*i;
            if (isPalin(mul)) {
                palin.push_back(mul);
            }
        }
    }

    std::cout << vecMax(&palin);

    return 0;
}
