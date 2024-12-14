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

void demchiahetbay (int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] % 7 == 0)
        {
            dem+=1;
        }
    }

    cout << "So luong gia tri duong chia het cho 7 la: " << dem;
}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a,n);
    demchiahetbay(a, n);
    return 0;
}
