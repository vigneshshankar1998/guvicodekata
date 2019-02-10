#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int lowerbound, upperbound, digitSum, temp, remainderNum, n ;
   cin>>lowerbound>>upperbound;
   for(int num = lowerbound; num <= upperbound; num++) {
      temp = num;
      n = 0;
      while (temp != 0) {
         n++;
         temp = temp/10;
      }
      temp = num;
      digitSum = 0;
      while (temp != 0) {
         remainderNum = temp%10;
         digitSum = digitSum + pow(remainderNum, n);
         temp = temp/10;
      }
      if (num == digitSum)
         cout<<num<<" ";
   }
   return 0;
}
