#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//template < typename T >
//const T& add (const T&  a,const T&  b) {return a+b;}
template <typename T >
const T& m_x(const T& a,const T& b)
{
    return (a>b)? a:b;
}
//template <class T >
//class something
//{
//public:
//    T a[2];
//    something();
//    T sum();
//};
/*Bahire definition dile age template likhte hoi*/
//template<class T>
//something<T>::something()
//{
//        cin>>a[0]>>a[1];
//}
//template<class T>
// T  something<T>::sum(){
//        return a[0]+a[1];
//    }
int main()
{
//    something <int>floatsomething;
//    cout<<floatsomething.sum()<<endl;
//    int a=5,b=8;
//    float x=7.8,y=5.6;
//    cout<<add<float>(x,y)<<endl;
//    cout<<add<int>(a,b)<<endl;
    cout<<m_x('a','4')<<endl;
    return 0;
}
