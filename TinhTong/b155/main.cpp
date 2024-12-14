#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangReal(double a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

double tongduong (double a[], int n)
{
    double S = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] > 0 ) S +=a[i];
    }

    return S;
}

int main()
{
    double a[MAXN];
    int n;
    NhapMangReal(a, n);

    double S = tongduong(a, n);
    cout << "Tong cua gia tri duong la: " << S;
    return 0;
}
