#include <iostream>
using namespace std;

//Napisz program, który sprawdzi, czy podana liczba całkowita jest parzysta, nieparzysta, czy żadna (0). ​

int main(){

    int liczba;
    cout << "Podaj liczbe\n";
    cin >> liczba;

    if(liczba == 0){
    cout << "to liczba 0";
    }
    else if(liczba % 2 == 0){
        cout <<"to liczba parzysta";
    }
    else{
        cout << "to liczba nieparzysta";
    }
    return 0;
    
    
}