#include <iostream>
#include <vector>

using namespace std;
template<class T>
class vector
{
    T sz;
    T* elem;
    T space;
public:
    vector() : sz(0), elem(0), space(0) {} vector(int s) : sz(s), elem(new double[s]), space(s)
    {
        for(int i = 0; i < sz; ++i) elem[i] = 0;
    } vector(const vector&);
    vector& operator=(const vector & v);
    ~vector()
    {
        delete[] elem;
    } double& operator[](int n);
    const double& operator[](int n) const;
    int size() const
    {
        return sz;
    } int capacity() const
    {
        return space;
    } void reserve(T alloc_size);
    void resize(T resize_size);
    void push_back(T d);
};
template<class T>
void push_back(T d)
{

}

class record
{
public:
    int cnt;
    double price;
};
template <class T>
void Sort( T& v,int n)
{

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i].cnt > v[j].cnt)
                swap(v[i],v[j]);

        }
    }

}
template <class T>
void SSort( T& v ,int n)
{

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i].price > v[j].price)
                swap(v[i],v[j]);
        }
    }

}

int main ()
{
    int n;
    record obj;
    vector<record>v;
    cin>>n;
    int t=n;
    while(n--)
    {
        cout<<"Enter the cnt & price:";
        cin>>obj.cnt>>obj.price;
        v.push_back(obj);

    }
    int ch;
    cout<<"Enter criteria: 1 for cnt 2 for price:";
    cin>>ch;
    int i=0;
    if(ch==1)
    {
        Sort(v,t);
        while(t--)
        {

            cout<< v[i].cnt<<" "<<v[i].price<<endl;
            i++;
        }
    }
    else
    {
        SSort(v,t);
        while(t--)
        {

            cout<< v[i].cnt<<" "<<v[i].price<<endl;
            i++;
        }
    }


    return 0;
}
