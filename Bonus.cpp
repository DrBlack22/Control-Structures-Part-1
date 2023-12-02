#include <iostream>
using namespace std;
int main(){
	int passes{0};
	int failures{0};
	int sCounter{1};
	
	while(sCounter <= 10){
		
		cout << "Enter the next result, please!\n";
		int result{0};
		cin >> result;
		
		if(result == 1){
			passes++;}else{
				    failures++;}
		sCounter++;}

	cout << "The numebr of passed students is: " << passes << endl;
	cout << "THe number of failed students is: " << failures << endl;
	
	if(passes > 8){
		cout << "Bonus to the instructor!" << endl;}
}