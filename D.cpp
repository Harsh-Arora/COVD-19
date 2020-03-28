#include<iostream>
#include<conio.h>
using namespace std;
int r,c;
void D_forcovid(int n){
    for ( r = 0; r < n; r++)
    {
        for ( c = 0; c < c; c++)
        {
            if (c == 1 || ((r == 0 || r == n-1) && 
               (c > 1 && c < n-2)) || (c == n-2 && 
                r != 0 && r != n-1)) 
                cout<< "*";
                     else
                cout<< " ";  
        } 
           
    cout<< endl; 
    } 
        }
int main()
{
    int n=9;
    D_forcovid(n);
    return 0;
}
