#include<iostream>  // Looping - for,for each,while
#include<vector>

using namespace std;

int main(){
    vector<int>v;
    for(int i=0;i<5;i++){

        int element;
        cin >> element;
        v.push_back(element);
    }


    for (int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;

    v.insert(v.begin() + 2,6);


    
    //for each
    for(int ele:v){
        cout << ele<<" ";
    }
    cout << endl;

    v.erase(v.end() - 2);

    //While Loop
    int idx = 0;
    while(idx<v.size()){
        cout << v[idx++] << " ";
    }



    return 0;
}
