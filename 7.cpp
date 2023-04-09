//7. how to find the upper bound of any desired element from the set.
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

      cout<<endl;
      auto it1 = s1.upper_bound(13);
      if(it1!=s1.end())
      {
           cout<<"the upper bound of key 13 is  : ";
           cout<<(*it1)<<endl;
      }
     return 0;
}

