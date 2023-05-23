#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
float calcular_delta(float A, float B, float C)
{
    float delta;
    delta= pow(B,2)-4*A*C;
    return delta;
}
void result_delta(float x)
{
    cout<<"O resultado de Delta"<<endl;
}
float calcular_raizes(float A, float B, float C)
{
    float x1;
    x1=(-B-sqrt(calcular(A,B,C)))/2*A;
}
float calcular_raizes(float A, float B, float C)
{
    float x2;
    x2=(-B+sqrt(delta))/2*A;
}
int main()
{

    setlocale(LC_ALL,"");
    delta = calc;

    x1 = calc(a, b, delta);


    system("pause");
    return 0;
}
