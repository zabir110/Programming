#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

//int array[20];
//int fibonacci( int n )
//{
//    if( n == 0 || n == 1 ) return 1;
//    else if( array[n] == 0 ) // ami oke ekbaro process kori nai - or khub mon kharap! :(
//        array[n] = fibonacci( n-1 ) + fibonacci( n-2 ); // ye! o khushi! :D
//    return array[n];
//}
char map[100][100];
int found = 0;
int totalrow,totalcol;

void check( int i, int j )
{
    if( i < 0 || j < 0 || i >= totalrow || j >= totalcol ) return;

    if( map[i][j] == 'B' ) found = 1; // mario can reach bipasa
    else if( map[i][j] == 'X' ) return;
    else
    {
        check(i-1,j);
        check(i,j-1);
        check(i,j+1);
        check(i+1,j);
    }
}
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){ return N=N | (1<<pos);}
int main()
{
//	cin>>totalrow>>totalcol;
//	for(int i=0;i<totalrow;i++){
//		for(int j=0;j<totalcol;j++){
//			cin>>map[i][j];
//		}
//	}
//	int i ,j;
//	cin>>i>>j;
//	check(i,j);
//	if(found==1) cout<<" Found";
//	else cout<<" NOt Found";
////	cout<<fibonacci(n);
    int N =100,prime[100];
    int status[100/32];
        int i, j, sqrtN;
        sqrtN = int( sqrt( N ) );
        for( i = 3; i <= sqrtN; i += 2 )
        {
            if( check(status[i/32],i%32) ==0)
            {
                for( j = i*i; j <= N; j += 2*i )
                {
                    status[j/32]=Set(status[j/32],j % 32) ;
                }
            }
        }
        puts("2");
        for(i=3; i<=N; i+=2)
            if( check(status[i/32],i%32)==0)
                printf("%d\n",i);
    return 0;
}
