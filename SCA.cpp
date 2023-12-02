#include <iostream>
using namespace std;
int main(){
	int total{0};
	int gradeCounter{0};
	cout << "Enter first grade, please!\n";
	int grade{0};
	cin >> grade;
	while(grade != -1){
		total = total + grade;
		gradeCounter ++;
		cout << "\nEnter a grade, please! Enter -1 to quit\n";
		cin >> grade;
		}
	if(gradeCounter != 0){
		int average{total/gradeCounter};
		cout << "Total grades entered: " << gradeCounter << endl;
		cout << "Total of grades entered: " << total << endl;
		cout << "Average of total grades entered: " << average << endl;
			}else{
			cout << "No grades were entered\n";}
}