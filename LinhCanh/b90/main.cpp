#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoThuc (double a[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void lonnhat (double a[], int n)
{
    double max = a[0];
    for (int i = 0; i < n; i++)
    {
        if ( max < a[i]) max = a[i];
    }
    cout << "Gia tri lon nhat cua mang la: " << max;
}

int main()
{
    double a[MAXN];
    int n;
    cout << "Nhap n: ";
    cin >> n;

    NhapMangSoThuc(a, n);
    lonnhat(a, n);
}

