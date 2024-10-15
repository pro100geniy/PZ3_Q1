#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    float salary;

public:
    void setData()
    {
        cout << "¬ведите ‘амилию: "; cin >> name;
        cout << "¬ведите оклад (руб.): "; cin >> salary;
    }

    void printData()
    {
        cout << name << " : " << salary << " руб." << endl;
    }

    float getSalary()
    {
        return salary;
    }
};

void bsort(Person**, int);
void order(Person**, Person**);

void bsort(Person** pp, int n)
{
    for (int j = 0; j < n - 1; j++)
        for (int k = j + 1; k < n; k++)
            order(pp + j, pp + k);
}

void order(Person** pp1, Person** pp2)
{
    if ((*pp1)->getSalary() > (*pp2)->getSalary())
    {
        Person* tempptr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}