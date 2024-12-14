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

void xoaam(double a[], int& n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] > 0 )
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
    xoaam(a, n);
    XuatMang(a, n);
    return 0;
}
