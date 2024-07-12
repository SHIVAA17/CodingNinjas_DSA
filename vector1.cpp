#include<iostream>   // vector basic operations
#include<vector>     // insert - push_back,
                     // delete - pop_back,clear,erase
using namespace std;

int main(){

    vector<int>v;
    
    cout << "Size :" << v.size() <<endl;
    cout << "Capacity: " << v.capacity() <<endl;

    v.push_back(1);

    cout << "Size :" << v.size() <<endl;
    cout << "Capacity: " << v.capacity() <<endl;

     v.push_back(3);

    cout << "Size :" << v.size() <<endl;
    cout << "Capacity: " << v.capacity() <<endl;


     v.push_back(5);

    cout << "Size :" << v.size() <<endl;
    cout << "Capacity: " << v.capacity() <<endl;

    v.resize(5);
    

    cout << "Size :" << v.size() <<endl;
    cout << "Capacity: " << v.capacity() <<endl;

    v.resize(10);
    

    cout << "Size :" << v.size() <<endl;
    cout << "Capacity: " << v.capacity() <<endl;











    return 0;
}