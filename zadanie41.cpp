#include <iostream>
using namespace std;
/*Znajdź największy element danej tablicy liczb całkowitych.
 Liczbę elementów tablicy i ich wartości pobierz od użytkownika.*/
int main() {

  int i, n;
  int arr[n];

  cout << "Podaj liczbe elementow tabeli: ";
  cin >> n;
  cout << endl;

  for(i = 0; i < n; ++i) 
  {
    cout << "Podaj liczbe " << i + 1 << " : ";
    cin >> arr[i];
  }

  for(i = 1;i < n; ++i) 
  {
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "najwiekszy element = " << arr[0];

  return 0;
}