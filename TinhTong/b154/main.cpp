#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoNguyen(int *a, int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void tonggiatri (int *a, int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        S += a[i];
    }
    cout << "Tong gia tri cua mang la: " <<S;
}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a,n);
    tonggiatri(a,n);
    return 0;
}
