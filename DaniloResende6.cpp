#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    float altura[20], soma=0, media;
    string nome[20];
    for(int i=0; i<20; i++)
    {
        cout<<"Digite o seu nome"<<endl;
        fflush(stdin);
        getline(cin, nome[i]);
        cout<<"Digite sua altura"<<endl;
        cin>>altura[i];
        soma=soma+altura[i];
    }
    media=soma/20;
    for(int i=0; i<20; i++)
    {
        if(altura[i]>=media)
        {
            cout<<"O atleta "<<nome[i]<<" possui uma altura maior ou igual a media dos 20 atletas "<<endl;
            cout<<"Com uma altura de "<<altura[i]<<" m"<<endl;
        }
        else
        {
            cout<<"O atleta "<<nome[i]<<" não possui uma altura maior ou igual a media dos 20 atletas "<<endl;
            cout<<"Com uma altura de "<<altura[i]<<" m"<<endl;
        }
    }
    system("pause");
    return 0;
}
