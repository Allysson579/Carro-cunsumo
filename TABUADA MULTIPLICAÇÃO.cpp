#include <iostream>

using namespace std;

int main()
{
    int num, aux;

    cout<< "Tabuada: Digite um numero de 0 a 9 para multiplicar: ";
    cin >> num;

    for(aux=1 ; aux<=10 ; aux++)
        cout<<num<<" * "<<aux<<" = " << num*aux <<endl;

    return 0;
}
