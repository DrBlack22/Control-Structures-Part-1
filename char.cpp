/* We need to write a program which takes an input
for a variable of type character and prints out the
integer equivalent of that character.

- We need to declare a variable of character data type
- We can initialize it by addigning it any value
- We need to prompt the user to enter an alphabet, number 
or symbol
- We need to give user input value to the character variable
- Next we need to use static cast to print out integer
equivalent of that variable
- We need to put all of this in a loop so user can enter
a character as long as they want.
- We need to use a do while loop and prompt the user to
enter y to input another character, n to exit the loop
*/

#include <iostream>
using namespace std;
int main(){

	char keep_entering;

	do{char user_input{'a'};
	cout << "Enter an uppercase, lowercase, digit or special character: \n";
	cin >> user_input;
	cout << static_cast<int>(user_input) << endl;
	cout << "Wanna try more? y for yes, n to exit" << endl;
	cin >> keep_entering;
	}while(keep_entering == 'y');
	
	return 0;
} 