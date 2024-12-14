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

void tuongquanchanle (int a[], int n)
{
    int chan = 0;
    int le = 0;
    for (int i = 0; i < n; i++)2
    {
        if ( a[i] % 2 != 0 )
        {
            le += 1;
        } else chan += 1;
    }

    if ( chan > le )
    {
        cout << -1;
    }
    else if ( chan < le )
    {
        cout << 1;
    }
    else cout << 0;
}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a,n);
    tuongquanchanle(a, n);
    return 0;
}
