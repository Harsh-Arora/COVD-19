#include<iostream>

using namespace std; 
void pattern(int n) 
{ 
    int i, j; 
    for (i = n - 1; i >= 0; i--) {  
        for (j = n - 1; j > i; j--) { 
            cout << " "; 
        } 

        cout <<"*";
 
        for (j = 1; j < (i * 2); j++) 
            cout << " "; 
  
        if (i >= 1) 
            cout <<"*"; 
        cout << "\n"; 
    } 
} 

int main() 
{ 
    int n = 5; 
    pattern(n); 
    return 0; 
}
