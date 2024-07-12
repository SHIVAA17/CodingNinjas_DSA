#include<iostream> // Occurence of last element and its position
#include<vector>

using namespace std;

int main(){
    vector<int>v;
    
    for(int i=0;i<7;i++){
        int element;
        cin >> element;
        v.push_back(element);
    }

    int x;
    cin >> x;
    int Occurence = -1;

    for(int i=0;i<v.size();i++){
        if(v[i] == x){
            Occurence = i;
        }
    }

    cout << Occurence << endl;




    return 0;
}