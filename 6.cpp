//6. How to find the lower bound of any desired element from the set.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
      set<int> s1;
      s1.insert(21);
      s1.insert(23);
      s1.insert(13);
      s1.insert(14);
      s1.insert(51);
      set<int>::iterator i;
      for(i = s1.begin(); i!=s1.end();i++)
          cout<<*i<<" ";
      cout<<endl;
      auto it = s1.lower_bound(25);
      if(it!=s1.end())
      {
           cout<<"the lower bound of key 25 is  : ";
           cout<<(*it)<<endl;
      }
      cout<<endl;

     return 0;
}
