#include <iostream>
using namespace std;
class ex
{
public:
    float a, b;
    int i, d[5];
    void get()
    {
        cout << "\nEnter A= ";
        cin >> a;
        cout << "Enter B= ";
        cin >> b;
    }
    void matrix()
    {

        try
        {
            cout << "Enter element of matrix :";
            for (i = 0; i < 5; i++)
            {
                cin >> d[i];
            }
            cout << "Enter position of array element which you want to search = ";
            cin >> i;
            if (i < 5)
            {
                cout << "d[" << i << "] = " << d[i];
            }
            else
            {
                throw i;
            }
        }
        catch (int)
        {
            cout << "Array index is bonded...??";
        }
    }
    void integer()
    {
        try
        {

            if (a != int(a) && b != int(b))
            {
                try
                {
                    if (b == 0)
                    {
                        throw i;
                    }
                    else
                    {
                        cout << "\nDivision is " << a / b;
                    }
                }

                catch (int)
                {
                    cout << "\nArithmatic  Error";
                }
            }

            else
            {
                throw i;
            }
        }
        catch (int)
        {
            cout << "\nOops! Numbers are integer ";
        }
    }
};

int main()
{
    ex s;

    s.get();
    s.matrix();
    s.integer();
    return 0;
}
