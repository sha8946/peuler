//////////////////////// 2020 Tyler Shamie /////////////////////////////////
//
//   Project     : Project Euler 02
//   File        : 02.cc
//   Description :
//      c++ solution to Problem 2 on projecteuler.net
//
//   Created On: 2020/05/24 at 06:33:20 PM EST
//   Created By: Tyler Shamie <mailto:tyler.shamie@gmail.com>
////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main() {
   int m = 4000000;
   int s = 0;
   int a = 0;
   int b = 1;
   int c = a + b;

   while (c < m) {
       if (c % 2 == 0) {
           s += c;
       }
       a = b;
       b = c;
       c = a + b;
   }

   std::cout << s;
}
