#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> v)
{
    cout<<"Size "<< v.size()<<endl;// v.size has o(1) complexity
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    // //Declaration 1
    // pair<int,string> p ;
    // p.first=1;
    // p.second= "PUNE" ;
    // cout<<p.second<<endl;

    // //Declaration 2
    // pair<int,double> p1;
    // p1 = {1,2.8};
    // cout<<p1.first<<" "<<p1.second<<endl;

    //Array of Pairs
    pair<int,int> p2[3];
    // for(int i=0;i<n;i++)
    // {
    //  cin>>p2.first>>p2.second;
    // }
    p2[0]={1,3};
    p2[1]={2,4};
    p2[2]={3,6};
    swap(p2[0],p2[1]);
    // cout<<p2[0]<<" "<<p2[1]<<endl;  WILL YIELD ERROR
    // SO CAN BE ACCESSED USING P2[0].FIRST ....

    //Vectors
    //Vector initialises its element to zero
    int n ;
    cout<<"Enter n"<<endl;
    cin>>n;
    vector<int> v;      // NO SIZE 
    vector<int> vi(10,3);  //Declared Size of 10 with assigning its default value with 3 instead of 0 
    printvec(v);
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
        //printvec(v);
    }
    v.push_back(6);   
    vector<int> v1=v; //Two vectors can be equated with O(n) time complexity
    v1.push_back(7);
    printvec(v1);
    return 0;
}