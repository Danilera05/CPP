#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    float V1[5], V2[5], V3[5];
    for(int i=0; i<5; i++)
    {
        cout<<"Digite valores para o primeiro vetor ";
        cin>>V1[i];
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Digite Valores para o segundo vetor ";
        cin>>V2[i];
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        if(i%2==0)
        {
            V3[i]=V1[i]+V2[i];
        }
        else if(i%2!=0)
        {
            V3[i]=V1[i]-V2[i];
        }
    }
    cout<<"Os valores do terceiro vetor é"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<V3[i]<<" ";
    }
    system("pause");
    return 0;
}
