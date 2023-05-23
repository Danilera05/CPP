#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int V1[3], V2[3],V3[3];
    for(int i=0; i<3; i++)
    {
        cout<<"Digite um primeiro vetor ";
        cin>>V1[i];
    }
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"Digite um segundo vetor ";
        cin>>V2[i];
    }
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        V3[i]=V1[i]*V2[i];
    }
    for(int i=0; i<3; i++)
    {
        cout<<V1[i]<<"x"<<V2[i]<<"="<<V3[i]<<" "<<endl;
    }
    cout<<endl;


    system("pause");
    return 0;
}
