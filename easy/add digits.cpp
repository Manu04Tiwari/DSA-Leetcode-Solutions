#include <iostream>
#include <vector>
using namespace std;
    class Solution {
        public:
            int addDigits(int num) {
                while (num >= 10) {
                    int sumall = 0;
                    while (num > 0) {
                        int ld = num % 10; 
                        sumall += ld; 
                        num /= 10; 
                    }
                    num = sumall; 
                }
                return num;
            }
        };
        