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

void chancuoi (int a[], int n)
{
    int sochan = 0;
    for (int i = 0; i < n ; i++)
    {
        if (a[i] > 0 && a[i] % 2 == 0)
        {
            sochan = a[i];
        }
    }
    if (sochan != 0 )
    {
        cout << "So chan cuoi la: " << sochan;
    } else cout << -1;
}
int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a, n);
    chancuoi(a, n);
    return 0;
}
