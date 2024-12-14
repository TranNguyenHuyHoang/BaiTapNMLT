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

bool ktsnt (int x)
{
    for (int j = 2; j <= sqrt(x); j++)
        {
            if (x % j != 0) return true;
        }
        return false;
}

void nguyentodau(int a[], int n)
{
    int firstprime = -1;
    for (int i = 0; i < n; i++)
    {
        if (ktsnt(a[i]) == true)
        {
            firstprime = a[i];
            break;
        }
    }
    if (firstprime != -1)
    {
        cout << "SNT dau tien la: " << firstprime;
    } else cout << firstprime;
}
int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a, n);
    nguyentodau(a, n);
    return 0;
}
