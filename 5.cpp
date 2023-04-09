//5. Make a c++ program to insert unique element in set
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
      set<int> s1;
      s1.insert(10);
      // 10;
      s1.insert(10);
      s1.insert(20);
      s1.insert(50);
      //50;
      s1.insert(50);
      s1.insert(30);
      set<int>::iterator i;
      for(i = s1.begin(); i!=s1.end();i++)
          cout<<*i<<" ";
      cout<<endl;
     return 0;
}
