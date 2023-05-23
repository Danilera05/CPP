#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    float vetor[10], soma=0;
    for(int i=0; i<10; i++)
    {
        cout<<"Digite um Valor"<<endl;
        cin>>vetor[i];
        soma=soma+vetor[i];
    }
    cout<<"A somas desses valores é :"<<soma<<endl;

    system("pause");
    return 0;
}
