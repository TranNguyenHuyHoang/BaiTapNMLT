#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoThuc(double a[], int &n)
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
    cout << "Mang cuoi cung la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void lietkeam (double a[], int n)
{
    double b[MAXN];
    int ib = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] < 0 )
        {
            b[ib++] = a[i];
        }
    }

    XuatMang(b,ib);
}
int main()
{
    double a[MAXN];
    int n;
    NhapMangSoThuc(a,n);
    lietkeam(a, n);
    return 0;
}
