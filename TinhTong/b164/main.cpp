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

bool chusochandautien (int x)
{
    int dv;
    for (; x > 0; x/=10)
    {
        dv = x%10;
    }
    if (dv % 2 == 0)
    {
        return true;
    } else return false;
}

void tongdauchan (int a[], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        if (chusochandautien(a[i])) S+=a[i];
    }

    cout << "Tong dau chan la: " << S;
}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a,n);
    tongdauchan(a, n);
    return 0;
}
