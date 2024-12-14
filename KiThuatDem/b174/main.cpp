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

void demtancung (int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if ( (a[i] % 10) % 5 == 0 && (a[i] % 10 ) % 2 != 0 )
        {
            dem+=1;
        }
    }

    cout << "So luong gia tri co chu so tan cung bang 5 la: " << dem;
}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a,n);
    demtancung(a, n);
    return 0;
}
