#include <iostream>

int main() 
{
   int miesiac;

   std::cout << "Podaj numer miesiaca od 1 do 12: ";
   std::cin >> miesiac;

   switch(miesiac){
    case 1:
         std::cout << "Styczen\n";
         std::cout << " Ma 31 dni jest pochmurno";
         break;
    case 2:
         std::cout << "Luty\n";
         std::cout << " Ma 28 dni jest pochmurno";
         break;
    case 3:
         std::cout << "Marzec\n";
         std::cout << " Ma 31 dni jest pochmurno";
         break;
    case 4:
         std::cout << "Kwiecien\n";
         std::cout << " Ma 30 dni, jest pochmurno";

         break;
    case 5:
         std::cout << "Maj\n";
         std::cout << " Ma 31 dni jest slonecznie";
         break;
    case 6:
         std::cout << "Czerwiec\n";
         std::cout << " Ma 30 dni jest slonecznie";
         break;
    case 7:
         std::cout << "Lipiec\n";
         std::cout << " Ma 31 dni jest slonecznie";
         break;
    case 8:
         std::cout << "Sierpien\n";
         std::cout << "Ma 31 dni jest slonecznie";
         break;
    case 9:
         std::cout << "Wrzesien\n";
         std::cout << " Ma 30 dni jest pochmurno";
         break;
    case 10:
         std::cout << "Pazdziernik\n";
         std::cout << " Ma 31 dni jest pochmurno";
         break;
    case 11:
         std::cout << "Listopad\n";
         std::cout << " Ma 30 dni jest pochmurno";
         break;
    case 12:
         std::cout << "Grudzien\n";
         std::cout << " Ma 31 dni jest pochmurno";
         break;


       default:
         std::cout << "Niewlasciwy numer, podaj numer miesiaca od 1 do 12";  }

   return 0;
}