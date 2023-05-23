#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    int vetorOriginal[10], vetorInvertido[10];
        for(int i=0; i<10; i++){
            cout<<"Digite um número ";
            cin>>vetorOriginal[i];
        }
        cout<<"\tVetor Original"<<endl;
        for(int i=0; i<10; i++){
            cout<<vetorOriginal[i]<<endl;
        }
        cout<<"\tVetor Invertido"<<endl;
        for(int i=9; i>-1; i--){
            vetorInvertido[i]=vetorOriginal[i];
            cout<<vetorInvertido[i]<<endl;
        }

   cout<<" "<<endl;

    system("pause");
    return 0;
}
