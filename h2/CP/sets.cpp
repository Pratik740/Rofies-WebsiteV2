#include<bits/stdc++.h>
using namespace std ;

void printset(set<string> &s)
{
    // set<string> :: iterator it = s.begin();
    // for(it = s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    for(auto itt : s)  cout<<itt<<" ";
    cout<<endl;
}

void printmultiset(multiset<string>&s)
{
    for(auto it : s)  cout<<it<<" ";
    cout<<endl;
}

int main()
{
    //Ordered  Sets
    set<string> ss ;
    //Stores unique data in ascending or lexicographical order . It uses red black trees 
    string sp = "pratik";
    ss.insert({sp});

    printset(ss);
    ss.insert("Pr");  //    O(log n)  
    ss.insert("at");
    ss.insert("ik");
    auto it = ss.find("pra"); // O(log n)
    if(it!=ss.end())   cout<<"Exists"<<endl;
    else cout<<"Not Exists"<<endl;
    printset(ss);
    auto itt = ss.find("Pr");
    if(itt!=ss.end())
    {
        ss.erase(itt);
    }
    printset(ss);



    //Unordered Sets  : To be used when order doesn't matter just we want to check whether element is present or not 
    unordered_set<string> s ;
    s.insert("abc"); //   O(1)
    s.find("ab");   //   O(1)


    // Multiset : It stores ALL the elements that are inserted in lexicographical or sorted order
    multiset<string> ms;
    ms.insert("ab"); //  O(log(n)) to insert elements
    ms.insert("ab");
    ms.insert("ab");
    ms.insert("cd");
    ms.insert("cd");
    printmultiset(ms);
    auto iit = ms.find("ab");  // It will return the iterator of the first occuring element   O(log(n)) 
    if(iit!=ms.end())    ms.erase(iit);// O(1) as iterator is provided   // It will only delete that first occuring element 
    printmultiset(ms);
    ms.erase("ab");  // It will delete all the abc in the multiset 
    printmultiset(ms);

}