#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	set<int> s;
 // ..
s.insert(42);
set<int>::iterator it = s.find(42);
 set<int>::iterator it1 = it;
 set<int>::iterator it2 = it;
 it--;
 it2++;
 cout<<*it<<" "<<*it2;
    return 0;
}
