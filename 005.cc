//////////////////////// 2020 Tyler Shamie /////////////////////////////////
//
//   Project     : Project Euler 05
//   File        : 05.cc
//   Description :
//      c++ solution to Problem 5 on projecteuler.net
//
//   Created On: 2020/05/24 at 08:26:27 PM EST
//   Created By: Tyler Shamie <mailto:tyler.shamie@gmail.com>
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    //lmao
    std::cout << lcm(19,lcm(18,lcm(17,lcm(16,lcm(15,lcm(14,lcm(13,lcm(12,lcm(11,lcm(10,lcm(9,lcm(8,lcm(7,lcm(6,lcm(5,lcm(4,lcm(3,lcm(2,1))))))))))))))))));
    return 0;
}

int lcm(int a, int b) {
    return (a * b) / (gcd(a, b));
}

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    } else {
        return gcd(b % a, a);
    }
}