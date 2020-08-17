//////////////////////// 2020 Tyler Shamie /////////////////////////////////
//
//   Project     : Project Euler 03
//   File        : 03.cc
//   Description :
//      c++ solution to Problem 3 on projecteuler.net
//
//   Created On: 2020/05/24 at 07:45:42 PM EST
//   Created By: Tyler Shamie <mailto:tyler.shamie@gmail.com>
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

int main() {
    long long l = 600851475143;
    long long d = 2;
    long long max = 0;
    std::vector<double> pfac;

    while (l > 1) {
        while (l % d == 0) {
            pfac.push_back(d);
            l /= d;
        }
        d = d + 1;
    }

    for (long long i = 0; i < pfac.size(); i++) {
        if (pfac.at(i) > max) {
            max = pfac.at(i);
        }
    }
    
    std::cout << max;

    return 0;
}
