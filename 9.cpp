//9. Converting String into Set in C++ STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string name = "saurabhkumar";
     set<char> set_name(begin(name),end(name));
     for(auto i : set_name)
          cout<<i<<" ";

     return 0;
}
