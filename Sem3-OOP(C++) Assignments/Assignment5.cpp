#include <iostream>
using namespace std;
class Matrix
{
    public :
    int r,c,r1,c1,i,j,ch,k,d[10][10];
    void read_matrix()
    {
       
       cout<<" Enter row for matrix a= ";
        cin>>r;
        cout<<" Enter column for matrix a = ";
        cin>>c;
        
        
          int a[r][c];
        cout<<" Enter row for matrix b = ";
        cin>>r1;
        cout<<" Enter column for matrix b = ";
        cin>>c1;
        int b[r1][c1];
         try{
        if(r>10||c>10||r1>10||c1>10)
        {
        throw (r);
        }
        else
        {
           cout<< " Enter element of matrix a : ";
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
         cout<< " Enter element of matrix b : ";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>b[i][j];
            }
        }
        }
        }
        catch(int)
        {
        cout<<" invalid order ";
        
        }
        
      
      
        int m[i][j];
        
        
        
        do{  
        cout<<" \nEnter your choice : ";
        cout<<"\nOperation on matrix";
        cout<<"\n1.Addition\n2.Subtraction\n3.multiplication\n4.exit";
        
        cin>>ch;
    switch(ch)
    {
           case 1:
        if(r!=r1 || c!=c1)
        {
           try
           {
           throw i;
           }
           catch(int)
           {
           
            cout<<" Invalid order of matrix...??\n";
            }
        }
        else
        {
            cout<<" \naddition is :\n";
            for(i=0;i<r;i++)
         {
            for(j=0;j<c;j++)
            {
                m[i][j]=a[i][j]+b[i][j];
                cout<<" "<<m[i][j];
            }
            cout<<endl;
         }
        }
        break;
           case 2:
           
        if(r!=r1 || c!=c1)
        {
            try
            {
            throw i;
            }
            catch(int)
            {
              cout<<" Invalid order of matrix...??\n";
              }
        }
        else
        {
                  cout<<" \n Subtraction is :\n";
            for(i=0;i<r;i++)
         {
            for(j=0;j<c;j++)
            {
                m[i][j]=a[i][j]-b[i][j];
                cout<<" "<<m[i][j];
            }
            cout<<endl;
         }
        }
        break;
        case 3 :
        if(c1!=r1)
        {
        try
        {
         throw i;
         }
         catch(int )
         {
         
              cout<<" Invalid order of matrix...??\n";
              }
        }
        else
        {
              for(i=0;i<r;i++)
         {
            for(j=0;j<c1;j++)
            {
                m[i][j]=0;
            }
         }
         
              for(i=0;i<r;i++)
         {
            for(j=0;j<c1;j++)
            {
                for( k=0;k<c;k++)
                {
                    m[i][j]+=a[i][k]*b[k][j];
                    
                }
            }
            
         }
          cout<<" \n Multiplication is :\n";
     for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<" "<<m[i][j];
            if(j==c1-1)
            cout<<endl;
        }
    }

        }
        break;
        case 4 :
        cout<<" Thanks for coming...!!";
        break;
        default :
        cout<<" Invalid input\n";
    }
      } while(ch!=4);
    }
    
        
    };


int main() {
  
    Matrix o;
    o.read_matrix();

    return 0;
}
