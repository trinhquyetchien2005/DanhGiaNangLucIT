#include <iostream>
using namespace std;

int checkGiaTriKhongTrungLap(int* arr);

int main()
{
    int n;
    int array[n];

    cout << "'Nhap mang: ";
    for(int i = 0; i < n; i++){
        cout << "Nhap gia tri << i << :";
        cin >> array[i];
    }
    cout << "So gia tri khong trung lap la: " << checkGiaTriKhongTrungLap(array);
    return 0;
}

int checkGiaTriKhongTrungLap(int array[])
{
    int resust = 0;
    for(int i = 0; i < sizeof(array); i++)
    {
        int a = array[i];
        for(int j = i++; j < sizeof(array); j++)
        {
            if(a == array[j])
            {
                break;
            }else
            {
                continue;
            }
            resust++;
        }
    }
    return resust;
}
