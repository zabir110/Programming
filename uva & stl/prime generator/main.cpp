#include <iostream>
#include<math.h>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for(int i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;
return true;
}

int main()
{
    int t, m, n;
    cin>>m>>n;
    for(long long int i = m; i <= n; i++)
    {
        if(isPrime(i)) cout<<i<<endl;
    }
return 0;
}
