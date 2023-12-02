#include <iostream>
using namespace std;
int main(){
	unsigned int x = 1;
	unsigned int total{0};
	while ( x <= 10 ){
	total += x;
	++x;}
	
	cout << total << endl;
}