#include <iostream>
#include <cmath>>
#define MAXN 100
using namespace std;

void NhapMangReal (double *a, int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void xanhat (double *a, int n, double x)
{
    double max = 0;
    double giatrixanhat = 0;
    for (int i = 0; i < n; i++)
    {
        if ( abs(x-a[i]) > max )
        {
            max = abs(x-a[i]);
            giatrixanhat = a[i];
        }
    }

    cout << "Gia tri trong mang xa gia tri x nhat: " << giatrixanhat;
}

int main()
{
    double a[MAXN];
    int n;
    double x;
    cout << "Nhap x: ";
    cin >> x;
    NhapMangReal(a, n);
    xanhat(a, n, x);
    return 0;
}
