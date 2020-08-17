//////////////////////// 2020 Tyler Shamie /////////////////////////////////
//
//   Project     : Project Euler 06
//   File        : 06.cc
//   Description :
//      c++ solution to Problem 6 on projecteuler.net
//
//   Created On: 2020/05/24 at 10:07:00 PM EST
//   Created By: Tyler Shamie <mailto:tyler.shamie@gmail.com>
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

int nsum(int n);
int sumsq(int n);

int main() {
    int max = 100;
    int snsum = nsum(max)*nsum(max);
    int ssr = sumsq(max);

    std::cout << snsum - ssr;
    return 0;
}

int nsum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int sumsq(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i*i;
    }

    return sum;
}