#include <iostream>

using namespace std;

int main(){
cout<<"Hola Mundo."<<endl;

bool seguir = true;

while( seguir ){
 cout<<"   MENU"<<endl
     <<"1.- Imprimir Secuencia"<<endl
     <<"2.- Salir"<<endl
     <<"Ingrese una opcion: ";
int opcion;

cin >> opcion;

switch(opcion){
 case 1:{
  int entero;
  cout<<"Ingrese un entero: ";
  cin>>entero;
  if(entero > 0){
   for(int i = 1; i<=entero; i++){
    cout<<" "<<i;
   }//for
   cout<<endl;
  }//if
  else{
   cout<<"El entero deber ser positivo."<<endl;
   }//else
  }//case3
  break;
  
 case 2:
  seguir=false;
  break;
 default: cout<<"Opcion incorrecta"<<endl;
}



}

return 0;
}
