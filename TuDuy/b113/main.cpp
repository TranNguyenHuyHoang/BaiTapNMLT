#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangReal(double *a, int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void timdoan (double *a, int n)
{
    double max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    cout << "Doan [a,b] chua cac gia tri trong mang la: [" << min << "," << max << "].";
}
int main()
{
    double a[MAXN];
    int n;
    NhapMangReal(a,n);
    timdoan(a,n);
    return 0;
}
