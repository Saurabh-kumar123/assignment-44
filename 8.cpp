//8. Create a function to search the element in the set.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
      set<int> s1;
      s1.insert(21);
      s1.insert(24);
      s1.insert(13);
      s1.insert(14);
      s1.insert(51);
      set<int>::iterator i;
      for(i = s1.begin(); i!=s1.end();i++)
          cout<<*i<<" ";
      cout<<endl;
      if(s1.find(23)!=s1.end())
          cout<<" 23 is present ";
      else
          cout<<" 23 is not present";
          cout<<endl;
      if(s1.find(51)!=s1.end())
          cout<<" 51 is present ";
      else
          cout<<" 51 is not present";
     return 0;
}


