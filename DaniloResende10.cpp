#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    float V1[10],V2[10],V3[20];
    for(int i=0; i<10; i++)
    {
        cout<<"Digite o valor do primeiro vetor"<<endl;
        cin>>V1[i];
        cout<<"Digite o valor do Segundo vetor"<<endl;
        cin>>V2[i];
    }
    for(int h=1, i=0; i<10, h<20; h=h+2, i++)
    {
        V3[h]=V1[i];
    }
    for(int h=0, i=0; i<10, h<20; h=h+2, i++)
    {
        V3[h]=V2[i];
    }
    cout<<"\tOs valores do terceiro vetor é: "<<endl;
    for(int h=0; h<20; h++)
    {
        cout<<V3[h]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
