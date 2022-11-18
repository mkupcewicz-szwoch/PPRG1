#include <iostream>
using namespace std;
/*Napisz program, który będzie rozwiązywał równanie kwadratowe:
a)Wypisze na konsolę, jaką postać ma równanie kwadratowe.
 b)Pobierze od użytkownika liczby A, B i C.
 c)Wypisze postać równania kwadratowego z uwzględnieniem wartości dla A, B i C.
 d)Obliczy i wypisze pierwiastki równania.*/
 int main(){
double a, b, c, x1, x2, x0, delta;
cout << "wzor rownania kwadratowego to: ax^2+bx+c=0" << "\n";
cout << "Podaj liczby a:" << "\n";
cin >> a;
cout << "Podaj liczby b: " << "\n";
cin >> b;
cout << "Podaj liczby c: " << "\n";
cin >> c;
cout << a << "x^2+" << b << "x+" << c << "=0";

cout<<"Podaj współczynniki a, b i c: ";
	cin>>a>>b>>c;
	
	delta = b*b - 4*a*c;
	
	if(delta>0)
	{
		delta = sqrt(delta);
		x1 = (-b - delta)/(2*a);
		x2 = (-b + delta)/(2*a);
		cout<<"Są dwa pierwiastki równania: "<<fixed<<setprecision(2)<<x1<<" "<<x2;	
	}
	else
		if(delta==0)
		{
			x0 = -b/(2*a);
			cout<<"Jest jeden pierwiastek: "<<fixed<<setprecision(2)<<x0;	
		}
		else
			cout<<"Brak pierwiastków";







    return 0;
 }