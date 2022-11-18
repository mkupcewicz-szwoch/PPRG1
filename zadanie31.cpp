#include <iostream>
#include <iomanip>
using namespace std;
/*Napisz program, który oblicza sumę, różnicę, iloczyn i iloraz dla dwóch liczb x i y wprowadzanych z klawiatury.
 W programie przyjmujemy, że liczby x i y są typu float(rzeczywistego).
  Dla zmiennych x, y suma, różnica, iloczyn i iloraz należy przyjąć format wyświetlania ich na ekranie z dokładnością do dwóch miejsc po kropce.*/
  int main(){
  float x;
  float y;
  cout << "Podaj x" << "\n";
  cin >> x;
  cout << "Podaj y" << "\n";
  cin >> y;
  double suma;
  suma = x+y;
  cout << "suma x oraz y to " << fixed << setprecision(2) << suma << "\n";
  double roznica1;
  double roznica2;
  roznica1 = x-y;
  roznica2 = y-x;
  cout << "pierwsza roznica x i y to: " << fixed << setprecision(2) << roznica1 <<" druga roznica y oraz x to: " << fixed << setprecision(2) << roznica2 << "\n";
  double iloczyn;
  iloczyn= x*y;
  cout << "Iloczyn x i y wynosi: " << fixed << setprecision(2) << iloczyn << "\n";
  double iloraz1;
  double iloraz2;5
  iloraz1= x/y;
  iloraz2= y/x;
  cout << "pierwszy iloraz x i y wynosi" << fixed << setprecision(2) << iloraz1 << " drugi iloraz y oraz x wynosi " << fixed << setprecision(2) << iloraz2 << "\n";

return 0;
  }