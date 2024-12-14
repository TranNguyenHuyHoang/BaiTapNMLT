#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoNguyen(double a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void XuatMang(double a[], int n)
{

        cout << "Mang cuoi cung: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void xoalonnhat(double a[], int& n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] != max )
        {
            a[j++] = a[i];
        }
    } n = j;
}
int main()
{
    double a[MAXN];
    int n;

    NhapMangSoNguyen(a, n);
    xoalonnhat(a, n);
    XuatMang(a, n);
    return 0;
}
