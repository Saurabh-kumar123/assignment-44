//1. Find the total number of elements of the set container.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
      set<int,greater<int>> s1;
      s1.insert(10);
      s1.insert(70);
      s1.insert(20);
      s1.insert(50);
      s1.insert(40);
      s1.insert(30);
      set<int,greater<int>>::iterator i;
      for(i = s1.begin(); i!=s1.end();i++)
          cout<<*i<<" ";
      cout<<endl;
      cout<<"total number of element is a set : "<<s1.size();
     return 0;
}
