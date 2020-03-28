#include<iostream>

using namespace std;

int main()
{
    int l = 5;
    
    for(int i=1;i<=l;i++){
        
        if(i==1 || i==l){
            for(int a=0;a<5;a++){
                cout << "*";
            }
            cout << endl;
        }
        
        else{
            
            for(int b=0;b<2;b++){
                cout << " ";
            }
            
            cout << "*";
            
            for(int c=0;c<2;c++){
                cout << " ";
            }
            
            cout << endl;
        }
        
    }
    
    return 0;
}
