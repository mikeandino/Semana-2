#include<iostream>

using namespace std;

int main(){

  int arreglo[100];//stack
 
  int* arregloPuntador=new int[200];//heap

  delete [] arregloPuntador;

	 int anotherArray[]={1,2,3,4,5,6,7,8,9,10,11,12};

  int matrix1[100][100];

  int** matrix2;

  matrix2=new int*[5];

  for(int i=0;i<5;i++)	
  
  matrix2[i]=new int[5];

  matrix2[2][2]=10;


//liberar memoria

 for(int i=0;i<5;i++){
   delete[] matrix2[i];
   matrix2[i]=NULL;
 } 

	   delete[] matrix2;

return 0;
}
