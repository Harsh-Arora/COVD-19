#include <iostream>

using namespace std;

int main()
{
    int l = 5;
    
    for(int i=1;i<=l;i++){
        
        if(i==1 || i==3){
            for(int a=0;a<5;a++){
                cout << "*";
            }
            cout << endl;
        }
        else if(i==2){
            cout << "*";
            for(int b=0;b<3;b++){
                cout << " ";
            }
            cout << "*" << endl;;
        }
        else{
            for(int c=0;c<4;c++){
                cout << " ";
            }
            cout << "*" << endl;
        }
        
    } 
    
    

    return 0;
}
