
//Napisz program do obliczania szeregu wg podanego wzoru: (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
#include <iostream>
using namespace std;

int main(){

  int i, j, n, suma, lacznie = 0;
  cout << "Podaj wartosc n wyrazu ";
  cin >> n;
  for (i = 1; i <= n; i++)
{
    suma = 0;
    for (j = 1; j <= i; j++)
    {
      lacznie += j;
      suma += j;
      cout << j;
      if (j < i)
      {
        cout << "+";
      }
    }
    cout << " = " << suma << '\n';

  }

  cout << "\n Suma szeregu wyrazów to: " << lacznie << '\n';





return 0;

}