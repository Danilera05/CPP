#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    float peso[5], maiorP, menorP, media, soma=0;
    string nome,nomeMa,nomeMe;
    for(int i=0; i<5; i++)
    {
        cout<<"Digite o nome do aluno da posi��o "<<i<<"�"<<endl;
        fflush(stdin);
        getline(cin, nome);
        cout<<"Digite o peso dessa pessoa"<<endl;
        cin>>peso[i];
        soma+=peso[i];
        if(i==0)
        {
            maiorP=peso[i];
            menorP=peso[i];
            nomeMe=nome;
            nomeMa=nome;
        }
        else
        {
            if(maiorP<peso[i])
            {
                maiorP=peso[i];
                nomeMa=nome;
            }
            if(menorP>peso[i])
            {
                menorP=peso[i];
                nomeMe=nome;
            }
        }
    }
    media=soma/5;
    cout<<"\n"<<endl;
    cout<<"A soma dos peso � "<<soma<<" e a m�dia � "<<media<<endl;
    cout<<"O maior peso da turma � "<<maiorP<<" do "<<nomeMa<<endl;
    cout<<"O menor peso da turma � "<<menorP<<" do "<<nomeMe<<endl;
    cout<<"\n"<<endl;
    for(int i=0; i<5; i++)
    {
        if(peso[i]>=media)
        {
            cout<<"O aluno da posi��o "<<i<<"� tem um peso maior ou igual a da m�dia"<<endl;
        }
        else
        {
            cout<<"O aluno da posi��o "<<i<<"� tem um peso menor a da m�dia"<<endl;
        }
    }

    system("pause");
    return 0;
}
