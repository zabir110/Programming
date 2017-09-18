#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
bool is_prime(int num)
{
    if (num<2)
        return false;
    for(long long int i=2; i*i<=num; i++)
    {
        if(num%i==0) return false;
    }
    return true;
}
vector<long int > get_range(long long int data)
{
    vector< long int > prime;
    for(long long int i=2; i<=data; i++ )
    {
    if ( is_prime(i))
        {
          //  prime.push_back(i);
          cout<<i<<endl;
        }
    }
    return prime;
}

int main()
{
    cout<<"Enter a number of data you want to check prime :";
    long long  int num;
    vector<long int >prime;
    cin>>num;
    prime=get_range(num);
    // int check;
    //  check=is_prime(num);
//    if(check==0)
//        cout << num <<" not prime" << endl;
//    else
//    {
//        cout<<num<<" prime";
//    }
    for(vector<long int > ::iterator it =prime.begin(); it!=prime.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
