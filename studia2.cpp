#include <iostream>
using namespace std;
int main(){
    int liczba;
    cout << "Podaj liczbę całkowitą: \n" ;
    cin >> liczba;
    if(liczba > 0){ 
        cout << "To liczba całkowita dodatnia";
    }
    else if(liczba < 0){
        cout << "to liczba ujemna";
    }
    else {
        cout << "to liczba zero";
    }
    return 0;
}