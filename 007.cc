//////////////////////// 2020 Tyler Shamie /////////////////////////////////
//
//   Project     : Project Euler 07
//   File        : 07.cc
//   Description :
//      c++ solution to Problem 7 on projecteuler.net
//
//   Created On: 2020/05/25 at 11:29:34 PM EST
//   Created By: Tyler Shamie <mailto:tyler.shamie@gmail.com>
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> nat;
    int n = 200000;
    int p = 2;
    bool unmarked = true;

    for (int i = 0; i <= n; i++) {
        nat.push_back(i);
    }

    while (unmarked) {
        for (int i = 1; i < n / p; i++) {
            
        }
    }

    return 0;
}
