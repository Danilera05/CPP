#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    const int TAM=50;
    string nome[TAM], nomeMAI, nomeMEN;
    float altura[TAM], mediatotal=0, mediaMAS=0, mediaFEM=0, altMAI, altMEN, media, sexo[TAM];
    for(int i=0; i<TAM; i++)
    {
        cout<<"Digite o seu nome"<<endl;
        fflush(stdin);
        getline(cin,nome[i]);
        cout<<"Digite sua altura"<<endl;
        cin>>altura[i];
        cout<<"Fale seu sexo\nDigite 1 se for masculino\nDigite 2 se for feminino"<<endl;
        cin>>sexo[i];
        mediatotal+=altura[i];
        if(i==0)
        {
            altMAI=altura[i];
            altMEN=altura[i];
            nomeMAI=nome[i];
            nomeMEN=nome[i];
        }
        else
        {
            if(altMAI<altura[i])
            {
                altMAI=altura[i];
                nomeMAI=nome[i];
            }
            else if(altMEN>altura[i])
            {
                altMEN=altura[i];
                nomeMEN=nome[i];
            }
        }

    }
    media=mediatotal/TAM;
    for(int i=0; i<TAM; i++)
    {
        if(sexo[i]==1)
        {
            mediaMAS+=altura[i];
        }
        else if(sexo[i]==2)
        {
            mediaFEM+=altura[i];
        }
    }
    for(int i=0; i<TAM; i++)
    {
        if(sexo[i]==1)
        {
            if(altura[i]==mediaFEM)
            {
                cout<<"O "<<nome[i]<<" tem a altura maior que a média feminina que é "<<mediaFEM<<" m"<<endl;
            }
        }
        else if(sexo[i]==2)
        {
            if(altura[i]==mediaMAS)
            {
                cout<<"O "<<nome[i]<<" tem a altura maior que a média masculina que é "<<mediaMAS<<" m"<<endl;
            }
        }
    }
    cout<<"A maior altura é "<<altMAI<<" m do "<<nomeMAI<<endl;
    cout<<"A menor altura é "<<altMEN<<" m do "<<nomeMEN<<endl;
    cout<<"A média das alturas é "<<media<<endl;
    for(int i=0; i<TAM; i++)
    {
        if(altura[i]<media)
        {
            cout<<nome[i]<<" possui uma altura menor quer a média das outras pessoas"<<endl;
        }
    }
    system("pause");
    return 0;
}
