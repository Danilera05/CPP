#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int V1[5], V2[5],V3[5];
    for(int i=0; i<5; i++)
    {
        cout<<"Digite um primeiro vetor ";
        cin>>V1[i];
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Digite um segundo vetor ";
        cin>>V2[i];
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        if(V1[i]!=V2[i])
        {
            V3[i]=1;
        }
        else
        {
            V3[i]=0;
        }
    }
    for(int i=0; i<5; i++)
    {
        cout<<V3[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
