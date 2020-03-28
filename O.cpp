#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    for (a=0;a<4;a++)
    { 
        for (b=3;b>a;b--)
        {
            cout<<" ";
        }
            for (c=0;c<=a*2;c++)
            {
                cout<<"*";
            }
            
            cout<<"\n";
        
    }
    
        for (a=2;a>0;a--)
    { 
        for (b=a;b<3;b++)
        {
            cout<<" ";
        }
            for (c=a*2;c>=0;c--)
            {   
                cout<<"*";
            }
            
            cout<<"\n";
        
    }

    
    return 0;
}
