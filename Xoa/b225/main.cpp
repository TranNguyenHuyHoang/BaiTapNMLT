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

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}

bool xoavitri(int a[], int& n, int k)
{
    if (k >= 0 && k < n)
    {
        for (int i = k; i < n - 1; i++)
        {
            a[i] = a[i+1];
        }
        n--;
        return 1;
    }

    return 0;
}

int main()
{
    int a[MAXN];
    int n;

    NhapMangSoNguyen(a, n);

    int k;
    cout << "Nhap vi tri muon xoa di: ";
    cin >> k;

    if (xoavitri(a, n, k)) XuatMang(a, n);
    return 0;
}
