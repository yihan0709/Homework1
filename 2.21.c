#include <stdio.h>
#include <stdlib.h>

int main(void){
    for(int i=0; i<9; i++){
        if(i==0 || i==8){
            for (int j=0; j<9; j++){
                cout<<"*";
            }
        }else{
            cout<<"*";
            for (int j=0; j<7; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout << "      ";
        /*if(i==0 || i==8){
            for (int j=0; j<9; j++){
                cout<<"*";
            }
        }else{
            cout<<"*";
            for (int j=0; j<7; j++){
                cout<<" ";
            }
            cout<<"*";
        }*/
        cout<<"\n";
    }
}