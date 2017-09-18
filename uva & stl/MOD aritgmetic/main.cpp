#include <iostream>

using namespace std;

int main()
{
    int fact=1;
    for(int i=1; i<=100; i++)
    {
        fact=fact*(i%97);
    }
    cout<<fact;
    return 0;
}
