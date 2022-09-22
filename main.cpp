/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    int N = 0;

    cout << "Bienvenido, por favor ingrese un numero de la tabla a multiplicar:"<<endl;
    cin >> N; 
   
     
    for (int i=1; i<=10; i++){
    cout<<N <<"*" <<i <<"="<< (N*i) <<endl; 
    }
}