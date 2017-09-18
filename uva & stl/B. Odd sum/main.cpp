#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string time;
  //  cin >> time;
    std::string str_dec = "2001, A Space Odyssey";
     int i_dec = std::stoi (str_dec,&sz);
      std::cout << str_dec << ": " << i_dec;
//    std::string::size_type sz;
//    int i= std::stoi (time,&sz);
 //   cout<<i;
//    int l=time.length();
//    if(time[l-2]=='A') cout<<time;
//    else
//    {
//        int m=stoi(time);
//        int n=stoi(time);
//        int sum=m*10+n;
//        cout<<sum;
//    }
    return 0;
}
