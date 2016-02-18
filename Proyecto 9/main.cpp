#include <iostream>

using namespace std;
//presentar los numeros del 1 al 10 usando while, c++ significa un numero + 1 osea n + 1 io means input output
int main()
{ int c=0;int numero;int suma=0;
int mayor=0; int promedio=0;

 while (c<5)
{   c++;
    cout<<"Numero # "<< c <<"...:";
    cin >> numero;
    suma+=numero; //suma = suma + numero;
    if(numero>mayor)
    {
      mayor = numero;
    }

        promedio = suma/5;
        0


};
    cout<<"El promedio es"<< promedio<<"\n";
    cout<<"Numero mayor es"<<mayor<<"\n";
    cout<<"suma de los numeros es" <<suma<<"\n";
    cout<<"Final del ciclo\n";
    return 0;
}
