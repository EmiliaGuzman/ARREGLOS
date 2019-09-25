#include <iostream>

using namespace std;

void imprimir(int arr[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout << arr[i];
    }
    ///return 0;
}

int sumar(int x[], int l)
{
    int suma=0;
    for(int i=0; i < l; i++)
    {
        suma+=x[i];
    }
    return suma;
}

int sumarRecursiva(int m[], int c)
{
    int sum=0, i=0;
    if(c==1){
        return m[i];
    }
    else{
        return sumarRecursiva( m[i++]+ sum, c);
    }
}
int main()
{
    /*int var[5];
    ///cout << "Ingresa cantidad de elementos: ";
    for(int i=0; i < 5; i ++)
    {
        cin >> var[i];
    }
    imprimir(var, 5);

    int x[3];
    for(int i=0; i < 3; i ++)
    {
        cin >> x[i];
    }
    sumar(x, 3);*/

    int nuev[3];
    for(int i=0; i < 3; i ++)
    {
        cin >> nuev[i];
    }
    sumarRecursiva(nuev, 3);


}
