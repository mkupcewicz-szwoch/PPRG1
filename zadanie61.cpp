/*Napisz program, który obliczy, ile jest liczb naturalnych (tj. całkowitych, dodatnich) nie większych od n które są podzielne przez 5 ale nie są podzielne przez 3. 
Liczba nma być pobrana od użytkownika.*/
#include <iostream>
using namespace std;
int main(){
int n, liczba_liczb = 0;

cout << "podaj liczbe naturalna n" << "\n";
cin >> n;

//cout << "to nie jest liczba naturalna, prosze podaj liczbe naturalna";
for (int j = 0; j < n; j++){
   
if (j % 3 == !0 && j % 5 == 0){
             liczba_liczb++;
             cout << j << " ";

}
}
cout <<"\n";
cout << "Jest " << liczba_liczb << " cyfr nie wiekszych od " << n << " ktore sa podzielne przez 5 ale nie przez 3." << "\n";
    return 0;


}