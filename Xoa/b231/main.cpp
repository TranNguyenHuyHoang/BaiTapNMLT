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

bool snt(int x)
{
    if ( x <= 1 ) return false;
    for (int i = 2; i*i <= x; i++)
    {
        if ( x % i == 0)
        {
            return false;
        }
    } return true;
}

void xoanguyento(int a[], int& n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if ( snt(a[i]) )
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
    xoanguyento(a, n);
    XuatMang(a, n);
    return 0;
}
