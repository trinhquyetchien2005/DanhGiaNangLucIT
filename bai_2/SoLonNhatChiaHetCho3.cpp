#include <iostream>

using namespace std;
void checkSoLonNhatChiaHetCho3(int n, int array[])
{
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(array[i] % 3 == 0 && array[i] > max)
        {
            max = array[i];
        }
    }

    if( max = 0)
    {
        cout << "Khong co";
    }
    else
    {
        cout << "So lon nhat chia het cho 3 la: " << max;
    }
}

int main()
{
    int n;
    int array[n];

    cout << "Nhap mang: ";
    for(int i = 0; i < n; i++){
        cout << "Nhap gia tri << i << :";
        cin >> array[i];
    }
    checkSoLonNhatChiaHetCho3(n, array);
    return 0;
}
