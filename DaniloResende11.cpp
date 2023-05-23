#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int v2[15], valorqualquer, cont=0;
    for(int i=0; i<15; i++){
        cout<<"Digite um número"<<endl;
        cin>>v2[i];
        cout<<endl;
    }
    cout<<"-----------------------------------------"<<endl;
    cout<<"Digite um número qualquer"<<endl;
    cin>>valorqualquer;
    for(int i=0;i<15;i++){
        if(valorqualquer==v2[i]){
            cont=cont+1;
        }
    }
    if(cont>=1){
        cout<<"Verdadeiro"<<endl;
    }
    else{
        cout<<"Falso"<<endl;
    }

    system("pause");
    return 0;
}
