#include <iostream>
using namespace std;
int main(){
    int size_square;
    int rows;
    int side;
    cout << "Enter square size: \n";
    cin >> size_square;
    side = size_square;
    while(size_square > 0){
            rows = side;
            while(rows > 0){
                    if(rows == side || side == size_square || rows == 1 || size_square == 1){
                        cout << '*';}
            else {cout << " ";}
                --rows;}

                            cout << "\n";
                            --size_square;
    }
}
