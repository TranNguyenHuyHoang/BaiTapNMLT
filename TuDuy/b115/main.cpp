#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangReal (double *a, int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void dautien (double *a, int n)
{
    double giatri = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] > 2003)
        {
            giatri = a[i];
            break;
        }
    }

    if (giatri != 0)
    {
        cout << "Gia tri dau tien lon hon 2003 la: " << giatri;
    } else cout << giatri;

}

int main()
{
    double a[MAXN];
    int n;
    NhapMangReal(a, n);
    dautien(a, n);
    return 0;
}
