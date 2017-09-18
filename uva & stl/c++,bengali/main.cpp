#include <iostream>

using namespace std;
class rectangle;
class cost
{
    int cost_rate;
public:
    void set_value(int n)
    {
        cost_rate=n;
    }
    int total_cost(rectangle a);

};

class rectangle
{
    int height;
    int width;
public:
    void set(int height ,int width)
    {
        this-> height = height;
        this->width = width;
    }
    int area ()
    {
        return height*width;
    }
    friend int cost ::total_cost(rectangle a);
};
int cost::total_cost(rectangle a)
{
    return cost_rate*a.height*a.width;
}
int main()
{
    rectangle obj;
    int h,w;
    cin>>h>>w;
    obj.set(h,w);
    cost c;
    int m;
    cin>>m;
    c.set_value(m);
    cout<<obj.area()<<endl;
    cout<<c.total_cost(obj)<<endl;

    return 0;
}
