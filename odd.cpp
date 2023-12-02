/* We need to write a program which:

- Takes two integers as input
- Stores them in two variables of int data type
- Determins whether each of them is an odd number
- Whether their sum is an odd number

Hints:
- An odd number is not a multiple of 2
- Any odd number has a remainder of when divided by 2
*/

#include <iostream>
using namespace std;
int main(){

	int x{0};
	int y{0};
	int sum{0};
	cout << "Enter first number: \n";
	cin >> x;
	cout << "Enter second number: \n";
	cin >> y;

	sum = x + y;

	if(x % 2 == 1){
		cout << x << " is odd!\n";}
	else{cout << x << " is even!\n";};

	if(y % 2 == 1){
		cout << y << " is odd!\n";}
	else{cout << y << " is even!\n";};

        if(sum % 2 == 1){
		cout << "Sum of both numbers " << sum << " is odd!\n";}
	else{cout << sum << " is even!\n";};

	return 0;
}