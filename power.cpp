#include <iostream>
using namespace std;
int main(){
	cout << "Enter base number as an integer: \n";
	unsigned int x{0};
	cin >> x;
	cout << "Enter exponent as an integer: \n";
	unsigned int y{0};
	cin >> y;
	unsigned int i{1};
	unsigned int power{1};
	
	while(i <= y){
		power *= x;
		++i;}

	cout << x << " raised to the power of " << y << " equals " << power << endl;
}