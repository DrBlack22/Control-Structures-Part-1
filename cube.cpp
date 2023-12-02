/* We need to write a program using only input/output statements and arithmetic operations,
whicc takes in face lengths of a cube from 0 to 4 cm and prints out the surface area and
volume of the cube in following format:

Face Length           Surface area        Volume    
of the cube (cm)      of cube (cm^2)      of cube(cm^3)
0                     0                   0
1                     6                   1
2                     24                  8
3                     54                  27  
4                     96                  64

- What do we have to begin with?
- We know that a cube is made up of a variable called sides, which is called face length
in the problem here.
- Lets say that face length of cube is a variable x of integer data type.
- What do we have next?
- We also know that surface area of the cube is 6*(x*x) cm^2.
- We also know that volume of the cube is (x*x*X).
- As we can not use any loop given the condition at the start of the problem,
we'll have to suffice with using output stream operations only.
- First of all, we'll declare a variable x of int data type and initialize it
to the value of zero.
- Next, cout gets the first line of the table i.e. "Face length 5 spaces Surface area 5 space Volume".
- Next, cout gets the second line of the table i.e. "of the cube (cm) 5 spaces of cube (cm^2) 5 spaces of cube(cm^3)".
- Next, cout gets the first value of x, followed by 2 tabs & 6 spaces, followed by the formula for surface area, followed by 2 tabs & 3 spaces
, followed by formula for volume of the cube.
- We repeat the process 4 times, each time assigning the x a new value equal to the face length of the cube.
*/

#include <iostream>
using namespace std;
int main(){
	int x{0};

	cout << "Face length           Surface area        Volume\n";
	cout << "of the cube (cm)      of cube (cm^2)      of cube(cm^3)\n";
	cout << x << "                     " << 6*(x*x) << "                   " << x*x*x << endl;
	x = 1;
 	cout << x << "                     " << 6*(x*x) << "                   " << x*x*x << endl;
	x = 2;
	cout << x << "                     " << 6*(x*x) << "                  " << x*x*x << endl;
	x = 3;
	cout << x << "                     " << 6*(x*x) << "                  " << x*x*x << endl;
	x= 4;
	cout << x << "                     " << 6*(x*x) << "                  " << x*x*x << endl;

	return 0;
}