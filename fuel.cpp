/* program which calculates and displays fuel average

- initialize variables
- prompt user to enter kilometers driven and fuel used
- input kilometers driven and fuel used
- display kilometers per liter

- initialize unsigned int kilometers_driven{1}
- initialize unsigned int liters_used{0}

- while kilometers driven are greater than or equal to one
		prompt user to enter kilometers driven	
		prompt user to enter liters used
		initialize fuel_avergae to kilometers driven / liters used
		print fuel average for this trip
		add fuel average of this trip to that of all trips and divide by the 			total number of trips
*/
#include <iostream>
using namespace std;
int main(){
	double kilometers_driven, liters_used, total_kms_driven{0.0},
	total_liters_used{0.0}, fuel_average;
	
	cout << "Enter kilometers driven (-1 to quit): " << endl;
	cin >> kilometers_driven;

	while(kilometers_driven != -1){
		
		total_kms_driven += kilometers_driven;
		
		cout << "Enter liters used: ";
		cin >> liters_used;
		total_liters_used += liters_used;
		
		cout << "Kms per liter this trip: " << kilometers_driven/liters_used << endl;
		
		cout << "Enter kilometers driven (-1 to quit): ";
		cin >> kilometers_driven;}

		fuel_average = total_kms_driven/total_liters_used;
		cout << "Total kms per liter: " << fuel_average << endl;
}