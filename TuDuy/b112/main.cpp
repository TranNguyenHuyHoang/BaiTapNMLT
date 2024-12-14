#include <iostream>
#include <cmath>
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

void gannhat (double *a, int n, double x)
{
    double min = abs(x-a[0]), giatrigannhat = 0;
    for (int i = 0; i < n; i++)
    {
        if ( abs(x-a[i]) < min)
        {
            min = abs(x-a[i]);
            giatrigannhat = a[i];
        }
    }

    cout << "Gia tri trong mang gan gia tri x nhat la: " << giatrigannhat;
}

int main()
{
    double a[MAXN];
    int n;
    double x;
    cout << "Nhap x: ";
    cin >> x;
    NhapMangReal(a, n);
    gannhat(a, n, x);
    return 0;
}
