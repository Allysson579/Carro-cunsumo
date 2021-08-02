#include <iostream>

using namespace std;

int main()
{
	float
    int num, aux;

    cout << "Tabuada: Digite um numero de 0 a 9 para dividir: ";
    cin >> num;

    for(aux=1 ; aux<=10 ; aux++)
        cout<<num<<" / "<<aux<<" = " << num/aux <<endl;

    return 0;
}
