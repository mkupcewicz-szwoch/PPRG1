#include <iostream>
/*Napisz program, który:
A) Pobierze od Użytkownika liczb "a" oraz "b" oraz wypisze je na ekran.
B) Wypisze wiersz gwiazdek o długości "a".
C) Wypisze kolumnę gwiazdek o długości "b".
D) Wypisze wypełniony prostokąt gwiazdek o wymiarach "a" na "b".
E) Wypisze obwód (obramowanie) prostokątugwiazdek o wymiarach "a" na "b".  (Wskazówka: warto skorzystać z operatora logicznego  -OR).
*/
int main(){
int a;
int b;
int i;
int j;

std::cout << "Podaj liczbe a: \n";
std::cin >> a ;
std::cout <<"Podaj liczbe b: \n";
std::cin >> b ;
std::cout << "Twoja liczba a to: " << a << '\n';
std::cout << "Twoja liczba b to: " << b << '\n';


std::cout << "wypisz wiersz gwiazdek o dlugosci 'a'\n";
for(int i = 0; i < a; i++){
    std::cout << "*";
}
std::cout << '\n';


std::cout << "wypisz kolumne gwiazdek o dlugosci 'b'\n";
for(int j = 0; j < b; j++){
    std::cout << "*\n";
}
std::cout << '\n';


std::cout << "wypisz wypelniony prostokat gwiazdek o wymiarach 'a' na 'b' ";

for(int z = 0; z < b; z++){
    std::cout <<'\n';

        for(int x = 0; x < a; x++){
            std::cout << "*";
        }
    }
std::cout << "\n wypisz obwod prostokatu z gwiazdek o wymiarach 'a' na 'b'\n";



for (i = 1; i <= a; i++) {
        for ( j = 1; j <= b; j++) {
            if (i == 1 || i == a || j == 1 || j == b)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }








return 0;


}