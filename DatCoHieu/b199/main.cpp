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

void kttoanchan (int a[], int n)
{
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << flag;
    } else cout << flag;

}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a, n);
    kttoanchan(a, n);
    return 0;
}
