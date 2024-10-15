#include "Person.h"

int main()
{
    system("chcp 1251 > nul");

    int n;
    cout << "Введите количество работников: ";
    cin >> n;

    Person** persPtr = new Person * [n];
    for (int i = 0; i < n; i++)
    {
        persPtr[i] = new Person;
        persPtr[i]->setData();
    }

    cout << "\nНеотсортированный список\n";
    for (int j = 0; j < n; j++)
        persPtr[j]->printData();

    bsort(persPtr, n);

    cout << "\nОтсортированный:\n";
    for (int j = 0; j < n; j++)
        persPtr[j]->printData();
    cout << endl;
    return 0;
}

