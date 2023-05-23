#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    const int TAM=10;
    float Num[TAM], salva;
    for(int i=0; i<TAM; i++)
    {
        cout<<"Digite um número"<<endl;
        cin>>Num[i];
    }
    for(int i=0; i<10; i++)
    {
        salva=Num[i];
        if(Num[i]>Num[i+1])
        {
            Num[i]=Num[i+1];
            Num[i+1]=salva;
            i=-1;

        }
    }
    for(int i=0; i<10; i++)
    {
        cout<<Num[i]<<", ";
    }
    system ("pause");
    return 0;
}
