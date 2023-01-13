/*Napisz program, który będzie symulował grupę 6 uczniów z kilku równoległych klas i ich wyniki w nauce z czterech przedmiotów.
 Program powinien wczytać sześciu uczniów o następujących właściwościach:
 •imię ucznia;
 •oceny z informatyki, matematyki, biologii i jezyka polskiego,a potem odpowiadał na pytania o ocenę z danego przedmiotu, gdzie najpierw pobiera od użytkownika numer ucznia, a następnie –numer przedmiotu.*/
 #include <iostream>
 #include <string>
struct Student {
    std::string imie;
    int informatyka;
    int matematyka;
    int biologia;
    int jezyk_polski;
};

int main() {
    Student studenci[6];

    
    for (int i = 0; i < 6; i++) {
        std::cout << "Podaj studenta nr " << i + 1 << " imie ";
        std::cin >> studenci[i].imie;
        std::cout << "Podaj studenta nr " << i + 1 << " ocene z informatyki: ";
        std::cin >> studenci[i].informatyka;
        std::cout << "Podaj studenta nr " << i + 1 << " ocene z matematyki: ";
        std::cin >> studenci[i].matematyka;
        std::cout << "Podaj studenta nr " << i + 1 << " ocene z biologii: ";
        std::cin >> studenci[i].biologia;
        std::cout << "Podaj studenta nr " << i + 1 << " ocene z jezyka polskiego: ";
        std::cin >> studenci[i].jezyk_polski;
    }

    
    int numer_studenta, numer_przedmiotu;
    std::cout << "Podaj numer studenta (1-6): ";
    std::cin >> numer_studenta;
    std::cout << "Podaj numer przedmiotu (1-4): ";
    std::cin >> numer_przedmiotu;

    
    if (numer_studenta >= 1 && numer_studenta <= 6 && numer_przedmiotu >= 1 && numer_przedmiotu <= 4) {
        numer_studenta--;
        switch (numer_przedmiotu) {
            case 1:
                std::cout << studenci[numer_studenta].imie << "ocena z informatyki wynosi: " << studenci[numer_studenta].informatyka << '\n';
                break;
            case 2:
                std::cout << studenci[numer_studenta].imie << "ocena z matematyki wynosi: " << studenci[numer_studenta].matematyka << '\n';
                break;
            case 3:
                std::cout << studenci[numer_studenta].imie << "ocena z biologii wynosi: " << studenci[numer_studenta].biologia << '\n';
                break;
            case 4:
                std::cout << studenci[numer_studenta].imie << "ocena z jezyka polskiego wynosi:: " << studenci[numer_studenta].jezyk_polski << '\n';
                break;
        }
    } else {
        std::cout << "Nieprawidlowy numer studenta lub przedmiotu" << '\n';
    }

    return 0;
}
 

 