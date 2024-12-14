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
    if ( x <= 1 ) return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if ( x % i == 0 )
        {
            return false;
        }
    } return true;
}

void tontainguyento (int a[], int n)
{
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (songuyento(a[i]))
        {
            flag = 1;
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
    tontainguyento(a, n);
    return 0;
}
