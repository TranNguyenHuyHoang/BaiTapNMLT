#include <iostream>
#include <cmath>
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

bool songuyento (int x)
{
    if (x <= 1) return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if ( x % i == 0 )
            return false;
    }
    return true;
}

void demnguyento (int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (songuyento(a[i])) dem += 1;
    }

    cout << "So luong SNT la: " << dem;
}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a,n);
    demnguyento(a, n);
    return 0;
}
