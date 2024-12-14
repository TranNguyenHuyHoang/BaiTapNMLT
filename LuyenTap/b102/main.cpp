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

void amdau (double *a, int n)
{
    double soam = 1;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] < 0 )
        {
            soam = a[i];
            break;
        }
    }

    if (soam != 1)
    {
        cout << "Gia tri am dau tien la: " << soam;

    } else cout << soam;
}

int main()
{
    double a[MAXN];
    int n;
    NhapMangReal(a, n);
    amdau(a, n);
    return 0;
}
