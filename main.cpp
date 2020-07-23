#include <iostream>
using namespace std;
void Pares(int a[], int n);
void ingresar(int a[], int n);

int main() {
  int arreglo[50];
  int t;
  cout << "Ingrese el tamaño del arreglo: ";
  cin >> t;
  ingresar (arreglo, t);
  Pares (arreglo,t); 
}

void ingresar(int a[], int n){
    for (int i=0; i<n; i++)
    {
        cout << "\nIngrese a[" << i << "]: " ;
        cin >> a[i];
    }

}

void Pares(int a[], int n){
  int b[50],c;
  for(int i = 0; i < n ; i++){
    if(a[i] % 2 == 0){ 
      b[c] = a[i];
      c++;
    }
  }
  cout << "\nNumeros Pares son:" << endl;
  for (int i=0; i < c; i++){
    cout << "\n"<<"b[" << i << "]: " << b[i] << endl;
  }
}

