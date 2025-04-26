#include <iostream>
using namespace std;

int Fibonacci(int i);

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "So Fibonacci thu " << n << "la: "<< Fibonacci(n) << endl;
}

int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}