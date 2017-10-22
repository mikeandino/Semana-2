#include <iostream>

using namespace std;

/*Introduccion a funciones*/

/*devuelve la capacidad de almacenamiento del entero pasado como parametro*/

int sizeofint(int);

int menu();

int suma(int, int);

int main(){
  while(menu()!=2){
   cout<<endl;
  }
  return 0;
}//main 

int sizeofint(int a){
  return sizeof a;
}//sizeofint

int menu(){
  int opcion;
  cout<<"-----Menu----"<<endl
  <<"1.Sumar"<<endl
  <<"2.Salir"<<endl;
  cout<<"Ingrese la opcion del menu: ";
  cin>>opcion;
  switch(opcion){
    case 1:{
     cout<<"Ingrese el primer valor a sumar: ";
     int a;
     cin>>a;
     cout<<"Ingrese el segundo valor a sumar: ";
     int b;
     cin>>b;
     cout<<"La suma de "<<a<<" con "<<b<<" es "<<suma(a,b)<<"."<<endl;
     break;
     };//case1
    case 2:{
     break;
     };//case 2
    case 3:{
     int a;
     cout<<"Ingrese el numero cual desea averiguar su tamaño: ";
     cin>>a;
     cout<<a<<" equivale a "<<sizeofint(a)<<"."<<endl;
     break;
     };//case 3
     default: cout<<"Numero Invalido"<<endl;
  }//switch	  
}//menu

int suma(int a,int b){
  return a+b;	
}//suma

