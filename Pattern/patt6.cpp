#include <iostream>         // hollow number pattern
                         
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if( i == 1 || i == n || j == 1 || j == n){   // if 1st row or last row or first column or last column
                cout << j;
            }

            else{
                cout <<" ";
            }
        }
        cout << endl;
    }
}