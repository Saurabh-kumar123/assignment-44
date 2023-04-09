//3. Erase an element from a set.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
      set<int> s1;
      s1.insert(10);
      s1.insert(70);
      s1.insert(20);
      s1.insert(50);
      s1.insert(40);
      s1.insert(30);
       for(auto i = s1.begin(); i!=s1.end();i++)
          cout<<*i<<" ";
          cout<<endl;
      set<int>::iterator i1,i2;
      i1 = s1.begin();
      i2 = s1.end();
      i2--;
      i2--;
      i1++;
      i1++;
      s1.erase(i1,i2);
      cout<<endl<<"after erase element : "<<endl;
      for(auto i = s1.begin(); i!=s1.end();i++)
          cout<<*i<<" ";
      cout<<endl;
     return 0;
}

