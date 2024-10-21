#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s ,s1 ;
    // cin>>s;
    // cout<<"Enter substring to be found\n";
    // cin>>s1;

    // if(s.find(s1)<=s.length())
    // cout<<"Found "<<s1<<" At "<<s.find(s1)<<endl;
    // else   cout<<"NOT FOUND";

    // To delete at particular index in string , use s.erase(s.begin()+i)     
    string s = "Pratik";
    s.erase(s.begin()+1);
    string s1 = s ; 
    cout<<s1;
    return 0;
}