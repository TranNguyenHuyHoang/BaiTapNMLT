#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoNguyen(int a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{

        cout << "Mang cuoi cung: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void xoachan(int a[], int& n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] % 2 != 0 )
        {
            a[j++] = a[i];
        }
    } n = j;
}
int main()
{
    int a[MAXN];
    int n;

    NhapMangSoNguyen(a, n);
    xoachan(a, n);
    XuatMang(a, n);
    return 0;
}
