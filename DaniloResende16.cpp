#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    const int TAM=6;
    int Sorteados[TAM], Apostados[TAM], cont=0;
    cout<<"Digite os números que você apostou"<<endl;
    for(int i=0; i<TAM; i++){
        cin>>Apostados[i];
    }
    cout<<endl;
    cout<<"Digite os números que você apostou"<<endl;
    for(int j=0; j<TAM; j++){
        cin>>Sorteados[j];
    }
    for(int i=0;i<TAM;i++){
        for(int j=0; j<TAM; i++){
            if(Sorteados[i]==Apostados[j]){
                cont=cont+1;
            }
        }
    }
    if(cont==3){
        cout<<"Ganhou o terno!"<<endl;
    }
    else if(cont==4){
        cout<<"Ganhou a Quadra!"<<endl;
    }
    else if(cont==5){
        cout<<"Ganhou a Quina!"<<endl;
    }
    else if(cont==6){
        cout<<"Ganhou a Sena!"<<endl;
    }

    system("pause");
    return 0;
}
