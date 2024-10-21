#include <bits/stdc++.h>
using namespace std ;

void printvec(vector<pair<int , int>> v)
{
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main()
{
    vector< pair<int,int> > v;
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x , y ;
        cin>>x>>y;
        //v.push_back(make_pair(x,y));
        v.push_back({x,y});
    }
    // To delete element at particular index i , we use " v.erase(v.begin()+i) " : Time Complexity : O(n) ;
    // " v.clear() " to remove all the elements of vector container , thus making it size 0 . 
    // To delete last element in the vector use v.pop_back(); 
    printvec(v);
}