#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int > m ;
    int n ;
    cin>>n;
     for(int i=0;i<n;i++)
     {
        int n1;
        cin>>n1;
        ++m[n1];        
     }
    
    for(auto m1 : m)     cout<<m1.first<<" "<<m1.second<<endl;
    
}