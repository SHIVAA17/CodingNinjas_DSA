#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int x = n/2;

    for(int i=1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(j==x || i == x){
                cout << "*";
            }
            else{
                cout <<" ";
            }
        }
        cout << endl;
    }

    return 0;
}