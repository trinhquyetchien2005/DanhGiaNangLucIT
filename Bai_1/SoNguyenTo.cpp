#include <iostream>
#include <cmath>
using namespace std;

bool checkSoNguyenTo(int i);

int main()
{
    int n;
    cout << "Nhap so gioi han: ";
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        if(checkSoNguyenTo(i))
        {
            cout << i << " / ";
        }else
        {
            continue;
        }
    }
}

bool checkSoNguyenTo(int b)
{
    if (b <= 2)
        return false;
    for (int i = 2; i <= sqrt(b); i++)
    {
        if (b % i == 0)
            return false;
    }
    return true;
}