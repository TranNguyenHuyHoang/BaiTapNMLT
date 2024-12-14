#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoThuc (double a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}
void duongdau(double a[], int n)
{
    int soduong = 0;
    for (int i = 0; i < n ; i++)
    {
        if ( a[i] > 0)
        {
            soduong = a[i];
            cout << soduong;
            break;
        }
    }
    if ( soduong == 0 ) cout << -1;
}

int main()
{
    double a[MAXN];
    int n;
    NhapMangSoThuc(a, n);
    duongdau(a, n);
}
