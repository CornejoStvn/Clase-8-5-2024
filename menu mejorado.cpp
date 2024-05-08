#include <iostream>

using namespace std;

int main(){
   char opcion, variable='x';

   do 
 {
 cout << "Menu de hoy \n";
 cout <<"A-Sopa de pollo\n";
 cout <<"B-Sopa de res\n";
 cout <<"C-Carne asada\n";
 cout <<"D- churrasco\n";
   cout <<"seleccione una opcion:" << "\n";
   cin >> opcion;
   cout << "seleccion seleccionada" << opcion <<"\n";
 }
  while (opcion != variable);

return 0;

}