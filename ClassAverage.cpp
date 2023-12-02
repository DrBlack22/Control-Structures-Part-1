#include <iostream>
using namespace std;
int main(){
	int total{0};
	int grade{0};
	int classAverage;
	int gradeCounter{1};
	while(gradeCounter <= 10){
			cout << "Enter next grade: \n";
			cin >> grade;
			total = total + grade;
			gradeCounter++;
				 }
			classAverage = total / gradeCounter;
			cout << "\nClass average grade is: " << classAverage << endl;
	
} 