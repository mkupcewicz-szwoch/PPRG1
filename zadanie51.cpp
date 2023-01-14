#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
/*Napisz program, w którym: 
a) użytkownik poda liczbę elementów wektora;
b) pobrane zostaną od użytkownika wszystkie elementy wektora;
c) wskazana zostanie wartość elementu maksymalnego wektora;
d) Wskazany zostanie numer indeksu elementu maksymalnego.*/
vector <int> wektorr;
int liczba_elementow_wektora;
int element_wektora;


cout <<"Podaj liczbe elementow wektora: " << "\n";
cin >> liczba_elementow_wektora;

for (int i = 0; i < liczba_elementow_wektora; i++ )
    {cout << "Podaj element wektora: "<< "\n";
    cin >> element_wektora;
    wektorr.push_back(element_wektora);

    }

cout << "najwiekszy  element wektora to: " << *max_element(wektorr.begin() , wektorr.end()) << "\n";
int index_najwiekszego_elementu = std::max_element(wektorr.begin(),wektorr.end()) - wektorr.begin();

std::cout << "index najwiekszego elementu:" << index_najwiekszego_elementu; 


}

