#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int ar[10][10];
    int br[10][10];


    ifstream in("z.txt");
    in.seekg(1,ios::beg);
    for(int i=0; i<3; i++)
    {
        for( int j=0; j<4; j++)
        {
            in>>ar[i][j];
            cout<<ar[i][j]<<" ";

        }
          cout<<endl;
        in.seekg(i+5,ios::cur);
    }
    cout<<endl<<endl;
    in.seekg(12,ios::beg);
     for(int i=0; i<3; i++)
    {
        for( int j=0; j<3; j++)
        {
            in>>br[i][j];
            cout<<br[i][j]<<" ";

        }
          cout<<endl;
        in.seekg(32+i*20,ios::beg);
    }


    return 0;
}
