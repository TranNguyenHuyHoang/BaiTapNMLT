#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangReal(double *a, int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void cuoicung (double *a, int n)
{
    double soam = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if ( a[i] < 0 && a[i] > -1 )
        {
            soam = a[i];
            break;
        }
    }

    if (soam != 0 )
    {
        cout << "So am cuoi cung lon hon -1 la: " << soam;
    } else cout << soam;
}

int main()
{
    double a[MAXN];
    int n;
    NhapMangReal(a,n);
    cuoicung(a,n);
    return 0;
}
