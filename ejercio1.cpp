#include <iostream>
using namespace std;

int main ()
{
    int numero1, numero2, numero3;

    cout << "introduce el primer numero entero: " << endl;
    cin >> numero1;

    cout << "ingresa el segundo numero entero: " <<endl;
    cin >> numero2;

    cout<< "ingresa el tercer numero entero: " << endl;
    cin >> numero3;

    int suma = numero1 + numero2 + numero3;
    
    float promedio = suma/3.0;

    int producto = numero1 * numero2 * numero3;

    //minimos

    int menor = numero1;
    if (numero2 < menor) menor = numero2;
    if (numero3 < menor) menor = numero3;

    //maximos 

    int mayor= numero1;
    if (numero2 > mayor) mayor=numero2;
    if (numero3 > mayor) mayor = numero3;

    cout << "===RESULTADOS==="<<endl;
    cout << "la suma es: " << suma<<endl;
    cout << "el promedio es: " << promedio <<endl;
    cout << "el producto es: " << producto <<endl;
    cout << "el numero mas pequeño es: " << menor <<endl;
    cout << "el numero mas grande es: " << mayor <<endl;

    return 0;
}