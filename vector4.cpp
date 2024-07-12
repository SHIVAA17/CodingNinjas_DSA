#include<iostream>  // no of occurence of element X
#include<vector>

using namespace std;


int main(){
    vector<int>v;
    int count =0;
    
    for(int i=0;i<6;i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    cout << "Enter value of x:" << endl;
    int x;
    cin >> x;

    for(int i =0;i<v.size();i++){
        if(v[i] == x){
            count++;

        }
    }

    cout <<count << " ";






    return 0;
}