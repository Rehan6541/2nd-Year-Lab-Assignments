#include <iostream>
using namespace std;
class shape
{

public:
    double a, b;
    void getdata()
    {
        cout << "A= ";
        cin >> a;
        cout << "B= ";
        cin >> b;
    }

    virtual void display_area() = 0;
};
class triangle : public shape
{
public:
    void display_area()
    {
        int c;
        c = 0.5 * a * b;
        cout << c;
    }
};
class rectangle : public shape
{
public:
    void display_area()
    {
        int d;
        d = a * b;
        cout << " area of rectangle" << d;
    }
};
int main()
{

    triangle t;
    t.getdata();
    t.display_area();
    rectangle r;
    r.getdata();
    r.display_area();
    return 0;
}
