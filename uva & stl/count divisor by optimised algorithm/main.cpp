#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
//bool is_prime(int num)
//{
//    if (num<2)
//        return false;
//    for(long long int i=2; i*i<=num; i++)
//    {
//        if(num%i==0) return false;
//    }
//    return true;
//}
//vector<long int > get_range(long long int data)
//{
//    vector< long int > prime;
//    for(long long int i=2; i<=data; i++ )
//    {
//        if ( is_prime(i))
//        {
//            prime.push_back(i);
//        }
//    }
//    return prime;
//}

int main()
{
  cout<<"Enter a num and find out its divisor:";
 //   vector<long int >prime;
      int n;
      cin>>n;
   // prime=get_range(n);
    int divisor=1;
    for( int i=2 ; i<=n; i++)
    {
        if(n%i==0)
        {

            int cnt=1;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }
            divisor *=cnt;
        }
    }
cout<<divisor<<endl;
    return 0;
}
