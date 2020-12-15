#include <iostream>
using namespace std;

int main(){


  //After visiting a childhood friend, Chef wants to get back to his home.
  //Friend lives at the first street,
  //and Chef himself lives at the N-th (and the last) street.
  //Their city is a bit special: you can move from the X-th street to the Y-th street
  //if and only if 1 <= Y - X <= K, where K is the integer value that is given to you.
  //Chef wants to get to home in such a way that the product of all the visited streets'
  //special numbers is minimal (including the first and the N-th street).

  //Input
  //The first line of input consists of two integer numbers - N and K -
  //the number of streets and the value of K respectively.
  //The second line consist of N numbers - A1, A2, ..., AN respectively,
  //where Ai equals to the special number of the i-th street
  int n,k,product;
  int  specVals[8];

  cout << "Enter the Number of streets followed by the value of K respectively" << endl;
  cin >> n >> k;
  cin >> specVals[7];


//Constraint 1
  if( n <= 1 || n >= 80)

cout << "N must be between 1 and 80" << endl;



else if( k <= 1 || k >= 100000)
  cout <<" K must be between 1 and 100000, try another number" <<endl;

  //Constraint 2

  else
  product = n * k;
    cout << product << endl;
}
