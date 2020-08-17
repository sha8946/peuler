//////////////////////// 2020 Tyler Shamie /////////////////////////////////
//
//   Project     : Project Euler 01
//   File        : 01.cc
//   Description :
//      c++ solution to Problem 1 on projecteuler.net
//
//   Created On: 2020/05/24 at 06:28:53 PM EST
//   Created By: Tyler Shamie <mailto:tyler.shamie@gmail.com>
////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main() {
    int sum = 0;
    
    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << sum;
}