#include <iostream>

using namespace std;

int main()
{
    int l = 5;
    
    for(int i=1;i<=5;i++){
        if(i==3){
            for(int a=0;a<5;a++){
                cout << "-";
            }
            cout << endl;
        }
        else{
            cout << endl;
        }
    }

    return 0;
}
