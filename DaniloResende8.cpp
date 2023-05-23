#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int num, n, f1, f2, f3;
    do
    {
        cout<<"Digite um número:";
        cin>>num;
    }
    while(num<=0);
    f1=0;
    f2=1;
    num=num-1;
    for(int i=0; i<=num; i++)
    {
        f3=f2+f1;
        cout<<f2<<endl;
        f1=f2;
        f2=f3;
    }
    system("pause");
    return 0;
}
