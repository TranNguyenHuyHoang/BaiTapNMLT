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

bool themvitri(int a[], int& n, int k, int x)
{
    if (k >= 0 && k <= n)
    {
        for (int i = n; i > k; i--)
        {
            a[i] = a[i-1];
        }
        a[k] = x;
        n++;
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
    cout << "Nhap vi tri de dua gia tri vao: ";
    cin >> k;

    int x;
    cout << "Nhap gia tri: ";
    cin >> x;

    if (themvitri(a, n, k ,x)) XuatMang(a, n);
    return 0;
}
