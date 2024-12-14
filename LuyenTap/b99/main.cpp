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

void chandau (int a[], int n)
{
    int sochan = -1;
    for (int i = 0; i < n ; i++)
    {
        if ( a[i] % 2 == 0)
        {
            sochan = a[i];
            break;
        }
    }

    if (sochan != -1 )
    {
        cout << "So chan dau tien la: " << sochan;
    } else cout << sochan;
}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a, n);
    chandau(a, n);
    return 0;
}
