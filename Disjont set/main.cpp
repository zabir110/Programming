#include <iostream>

using namespace std;
//JUST charscter use korsi
//INT diyao kora jai
char parent[100];
void init_disjoint_set(int n)
{
    for(int i=0; i<n; i++)
    {
        parent[i]='a'+i;
        cout<<parent[i]<< " parent "<<parent[i]<<endl;
    }
}
char Find_representative(char r)
{
    if( parent[r]=r )
    return r;
    parent[r]=Find_representative(parent[r]);
    return parent[r];
}
void Union( char a,char b)
{
    char u=Find_representative(a);
    char v=Find_representative(b);
    if(u!=v){
        parent[u]=v;
        cout<<a<< " r parent "<<b<<endl;
    }
}
int main()
{
	int n;
	cin>>n;
	init_disjoint_set(n);
	//a=1 b=2 c=3 d =4 e =5
	Union('a','b');
	Union('c','b');
	Union('e','d');
	Union('d','b');
    return 0;
}
