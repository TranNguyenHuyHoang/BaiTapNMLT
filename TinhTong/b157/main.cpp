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

bool lehangchuc (int x)
{
    if ( (x/10) %5 == 0 && (x/10) % 2 != 0)
    {
        return true;
    } else return false;
}

void tongchuc (int a[], int n)
{
    int S = 0;
    for ( int i = 0; i < n; i++)
    {
        if(lehangchuc(a[i])) S += a[i];
    }
    cout << "Tong hang chuc co chu so 5 la: " << S;
}

int main()
{
    int a[MAXN];
    int n;

    NhapMangSoNguyen(a, n);
    tongchuc(a, n);
    return 0;
}
