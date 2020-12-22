#include <iostream>
using namespace std;


/* Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 10000
Example
Input
3
1 2
100 200
40 15

Output
1
100
10 */


int main(){

  int A,B,T,output,output1,output2,t1,t2,t3,t4;

  cin >> T >> A >> B >> t1 >> t2 >> t3 >> t4;

  output= A % B;

  output1= t1 % t2;

  output2=t3 % t4;

//Constraints
if( T >=1 && T <=1000 && A >=1 && A <=10000 && B >=1 && B <= 10000){
  cout << output << endl;
  cout << output1 << endl;
  cout << output2 << endl;
}
else {
  return 0;
}
}
