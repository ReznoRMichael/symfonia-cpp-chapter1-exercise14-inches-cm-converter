#include <iostream>
#include <cstdlib> // system Pause

using namespace std;

double cale;
double centymetry;
double przelicznik = 2.54;

int main()
{
    cout << "Konwersja cale -> centymetry\nPodaj ilosc cali do konwersji: " << endl;
    cin >> cale;

    centymetry = cale * przelicznik;

    cout << cale << " * " << przelicznik << " = " << centymetry << " cm" << endl;

    system("PAUSE");

    return 0;
}
