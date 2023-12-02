#include <iostream>
using namespace std;
int main(){
  int square_size;

  cout << "Enter square size: \n";
  cin >> square_size;

  int rows = square_size;
  while(rows > 0){

    int columns = square_size;
    while(columns > 0){
             ((columns == square_size || columns == 1 || rows == 1
               || rows == square_size)? cout << '*' : cout << " ");
      --columns;
    }

    cout << "\n";
    --rows;
  }
}

