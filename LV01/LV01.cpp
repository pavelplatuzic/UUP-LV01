#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double prijedeniKm, potrosnjaVozila, cijenaGoriva;

    cout << "Unesite broj prijedenih kilometara: ";
    cin >> prijedeniKm;

    cout << "Unesite potrosnju vozila (litara na 100 km): ";
    cin >> potrosnjaVozila;

    cout << "Unesitte cijenu goriva po litri (u eurima): ";
    cin >> cijenaGoriva;

    double potrosenoGoriva = (prijedeniKm * potrosnjaVozila) / 100;
    double ukupniTrosakGoriva = potrosenoGoriva * cijenaGoriva;

    cout << setprecision(4);
    cout << "Potroseno goriva: " << potrosenoGoriva << " litara\n";
    cout << "Ukupni trosak goriva za putovanje: " << ukupniTrosakGoriva << " eura\n";

    return 0;
}
