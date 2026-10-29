#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* p, const int size, const int Low, const int High) // формування
{
    for (int i = 0; i < size; i++)
        p[i] = Low + rand() % (High - Low + 1);
}

void Print(int* p, const int size) //виведення
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << p[i];
    cout << endl;
}

int Count(int* p, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
        if (!(p[i] % 2 == 0 && i % 13 == 0))
            k++;
    return k;
}

int Sum(int* p, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (!(p[i] % 2 == 0 && i % 13 == 0))
            S += p[i];
    return S;
}

void Zero(int* p, const int size)
{
    for (int i = 0; i < size; i++)
        if (!(p[i] % 2 == 0 && i % 13 == 0))
            p[i] = 0;
}

int main()
{
    srand((unsigned)time(NULL));    // ініціалізація генератора випадкових чисел

    const int n = 25;               // кількість елементів масиву
    int p[n];

    int Low = 15;                   // діапазон значень елементів
    int High = 94;

    Create(p, n, Low, High);
    Print(p, n);

    cout << "Count = " << Count(p, n) << endl;
    cout << "Sum = " << Sum(p, n) << endl;

    Zero(p, n);
    Print(p, n);

    return 0;
}