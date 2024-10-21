#include<bits/stdc++.h>
using namespace std ;
void printmap(map<int ,string> &m)
{
    cout<<"SIZE : "<<m.size()<<endl;
    for(auto &v: m)
    {
        cout<<v.first<<" "<<v.second<<endl;
    }
}

int main()
{
    map <int,string> m ;
    // DECLARATION 1
    m[1]="PR";
    m[3]="IK";
    m[2]="AT";

    //DECLARATION 2
    m.insert({4," J"});
    map<int,string> :: iterator it = m.begin();
    for( it = m.begin() ; it!=m.end();++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    //m.insert({7,"NO"});
    
    // It stores data structure in sorted manner 
    // If strings then in lexicographical order 

    //Search
    auto it2 = m.find(7);
    if(it2==m.end())   cout<<"Not Present";
    else cout<<it2->first<<" "<<it2->second<<endl;

   // m.erase(3);//both key and iterator to that key element can be used to erase or remove
    //printmap(m);
    cout<<endl;
    auto it1=m.find(1);  
   // m.erase(it1);
    //printmap(m);
    //m.clear();
    // printmap(m);
    m.insert({7,"YES"});
    m.insert({7,"YES1"});
    printmap(m);
    
    

}