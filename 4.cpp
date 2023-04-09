//4. Checks whether the set is empty or not.if it is empty insert 5 elements in the set
#include<bits/stdc++.h>
using namespace std;
int main()
{
     set<int> s1{};
     if(s1.empty())
     {
      s1.insert(10);
      s1.insert(70);
      s1.insert(20);
      s1.insert(50);
      s1.insert(40);
      s1.insert(30);
     cout<<"the element is : "<<endl;
     //set<int>::iterator i;
    for(auto i = s1.begin();i!= s1.end();i++)
          cout<<*i<<" ";

     }
     else
          cout<<"false"<<endl;

     return 0;
}

