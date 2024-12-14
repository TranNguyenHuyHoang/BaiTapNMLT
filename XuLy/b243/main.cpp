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

void XuatMang (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void chanlehaihang(int a[], int n)
{
    int b[MAXN], ib = 0;
    int c[MAXN], ic = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[ib++] = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            c[ic++] = a[i];
        }
    }

    XuatMang(b, ib);
    cout << endl;
    XuatMang(c, ic);
}



int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a, n);
    chanlehaihang(a, n);
    return 0;
}
