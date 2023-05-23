#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int V[10], VT;
    bool existe;
    for(int i=0; i<10; )
    {
        cout<<"Digite um número"<<endl;
        cin>>VT;
        existe = false;
        if(i==0)
        {
            V[i]=VT;
            i++;
        }
        else if(i!=0)
        {
            for(int j=0; j<=i; j++)
            {
                if(VT==V[j])
                {
                    existe = true;
                }
            }
            if(existe==true){
                cout<<"Numero já existe"<<endl;
            }
            else{
                V[i] = VT;
                i++;
            }
        }
    }
    for(int i=0; i<10; i++){
        cout<<V[i]<<" ";
    }

    system("pause");
    return 0;
}
