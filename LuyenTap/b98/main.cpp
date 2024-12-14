#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoThuc (double a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void nhonhat(double a[], int n)
{
    double min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i]) min = a[i];
    }
    cout << "Gia tri nho nhat la: " << min;
}

int main()
{
    double a[MAXN];
    int n;
    NhapMangSoThuc(a, n);
    nhonhat(a, n);
    return 0;
}
