#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int V[100], conjunto1[50], conjunto2[50], num, conjunto2cont=0,conjunto1cont=0;
    cout<<"Digite uma quantidade para repetir"<<endl;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        cout<<"Digite um número"<<endl;
        cin>>V[i];
    }
    for(int i=0; i<num; i++)
    {
        if(V[i]%2==0 and V[i]>=0)
        {
            conjunto1[i]=V[i];
            conjunto1cont=conjunto1cont+1;
        }
        else if(V[i]%2!=0 or V[i]<0)
        {
            conjunto2[i]=V[i];
            conjunto2cont=conjunto2cont+1;
        }

    }
    cout<<"======================================="<<endl;
    cout<<"\tConjunto 1"<<endl;
    if(conjunto1cont==0)
    {
        cout<<"O conjunto 1 esta vazio"<<endl;
        cout<<endl;
    }
    else if(conjunto1cont!=0)
    {
        for(int i=0; i<conjunto1cont; i++)
        {
            cout<<conjunto1[i]<<endl;;
        }
    }
    cout<<"======================================="<<endl;
    cout<<"\tConjunto 2"<<endl;
    if(conjunto2cont==0)
    {
        cout<<"O conjunto 2 está vazio"<<endl;
        cout<<endl;
    }
    else if(conjunto2cont!=0)
    {
        for(int i=0; i<conjunto2cont; i++)
        {
            cout<<conjunto2[i]<<endl;
        }
    }

    system("pause");
    return 0;
}
