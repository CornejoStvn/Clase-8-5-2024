#include <iostream>
using namespace std;

int main()
{
int n = 0, i=0, primo= 1, resultado= 0;
cout <<"Ingrese un numero\n";
cin >> n;


for (i = n-1; i>=2; i=i-1){
resultado = n%i;
}

if (resultado == 0 ){
cout << "su numero es primo ";
}
else if (resultado == 1 ){
    cout << "su numero no es primo ";
}
return 0;
} 