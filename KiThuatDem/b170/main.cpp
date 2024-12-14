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

void demchan (int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0) dem += 1;
    }

    cout << " So luong so chan la: " << dem;
}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a, n);
    demchan(a, n);
    return 0;
}
