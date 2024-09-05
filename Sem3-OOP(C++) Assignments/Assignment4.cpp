#include<iostream>
using namespace std;

class Complex{
      float x, y;
   public:
      Complex(){
         x=0;
         y=0;
      }
      Complex operator +(Complex);
      Complex operator *(Complex);
      friend istream & operator>> (istream & input, Complex & t)
      {
         cout<<"Enter the real part : ";
         input>>t.x;
        cout<<"Enter the imaginary part : ";
         input>>t.y;
      }
      friend ostream & operator<< (ostream & output, Complex & t)
      {
        output<<t.x<<" + "<<t.y<<"i\n";
      }
};

Complex Complex :: operator + (Complex c){
    Complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

Complex Complex :: operator * (Complex c){
    Complex temp2;
    temp2.x = (x*c.x) - (y*c.y);
    temp2.y = (y*c.x) + (x*c.y);
    return (temp2);
}

int main(){
    Complex c1, c2, c3, c4;
    cout<<"Default constructor value : \n";
    cout<<c1<<endl;
    cout<<"Enter the 1st number : \n";
    cin>>c1;
    cout<<"Enter the 2nd number : \n";
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"\nThe 1st number is : ";
    cout<<c1;
    cout<<"\nThe 2nd number is : ";
    cout<<c2;
    cout<<"\nThe addition is : ";
    cout<<c3;
    cout<<"\nThe multiplication is : ";
    cout<<c4;
    return 0;
}
