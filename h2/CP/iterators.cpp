#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    //Iterator is pointer that points an element inside the container . It is used to move through the contents of the operators
    vector<int> :: iterator it = v.begin();   // It is advised to use auto keyword.
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    //Range based Loops
    for(int value:v)
    {
        value++;
        cout<<value<<" ";
    }
    // Output : 1 2 3 4 5
    cout<<endl;
    for(int value:v)
    {
        value++;
    }
    for(int value: v)
    {
        cout<<value<<" ";
    }
    //Output: 1 2 3 4 5 . Because it saves as  a copy
    //hence it is advisable to use & reference operator
    cout<<endl;


    // Auto keyword : It automatically identifies the datatype of variable 
    auto a = 1;
    cout<<a<<endl;
    // It avoids long declaration of iterator ie. vector< pair<int,int> > :: iterator it=v.begin() 
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    // Using auto keyword  and range based loops    
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}