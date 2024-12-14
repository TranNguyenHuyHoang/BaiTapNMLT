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

void motvedau(int a[], int& n)
{
    int b[MAXN], ib = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] == 1 )
        {
            b[ib++  ] = 1;
        }

    }

    for (int i = 0; i < n; i++)
    {
        if ( a[i] != 1 )
        {
            b[ib++] = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}
int main()
{
    int a[MAXN];
    int n;

    NhapMangSoNguyen(a, n);
    motvedau(a, n);
    XuatMang(a, n);
    return 0;
}