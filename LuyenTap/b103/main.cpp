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

void duongcuoi (double *a, int n)
{
    double soduong = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if ( a[i] > 0 )
        {
            soduong = a[i];
            break;
        }
    }
    if (soduong != -1)
    {
        cout << "So duong cuoi cung la: " << soduong;
    } else cout << soduong;
}

int main()
{
    double a[MAXN];
    int n;
    NhapMangReal(a, n);
    duongcuoi(a, n);
    return 0;
}
