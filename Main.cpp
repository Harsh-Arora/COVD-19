#include<iostream>
#include <chrono>
#include <thread>

using namespace std;

void letterc(int l){

	for(int i=1;i<=l;i++){
        if(i==1 || i==l){
            for(int a=0;a<5;a++){
                cout << "*";
            }
            cout << endl;
        }
        else
            cout << "*" << endl;
    }

}

void lettero(int l){
	for(int i=1;i<=l;i++){
        if(i==1 || i==l){
            for(int a=0;a<5;a++){
                cout << "*";
            }
            cout << endl;   
        }
        else{
            for(int b=0;b<1;b++){
                cout << "*";
                for(int c=0;c<3;c++){
                	cout << " ";
                }
                cout << "*";
            }
            cout << endl;
        }   
    }
}

void letterv(int l){
	int i, j; 
    for (i = l - 1; i >= 0; i--) {  
        for (j = l - 1; j > i; j--) { 
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

void letteri(int l){
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
}

void letterd(int l){
	int r, c;
    for ( r = 0; r < l; r++)
    {
        for ( c = 0; c <= l; c++)
        {
            if (c == 1 || ((r == 0 || r == l-1) && (c > 1 && c < l-2)) || (c == l-2 && r != 0 && r != l-1)) 
                cout<< "*";
            else
                cout<< " ";  
        } 

    cout<< endl; 
    }
}

void dash(int l){
	for(int i=1;i<=5;i++){
        if(i==3){
            for(int a=0;a<5;a++){
                cout << "*";
            }
            cout << endl;
        }
        else{
            cout << endl;
        }
    }
}

void letter1(int l){
	for(int a=0;a<l;a++)
    {
    	for(int b=0;b>2;b++){
    		cout << " ";
    	}
      	cout << "*";
      	for(int b=0;b>2;b++){
    		cout << " ";
    	}
    	cout << endl;
    }
}

void letter9(int l){
	for(int i=1;i<=l;i++){
        if(i==1 || i==3 || i==5){
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
}

int main(){

	int l = 5;

	letterc(l);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	lettero(l);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    
	letterv(l);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    
	letteri(l);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    
	letterd(l);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    
	dash(l);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    
	letter1(l);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    
	letter9(l);

}
