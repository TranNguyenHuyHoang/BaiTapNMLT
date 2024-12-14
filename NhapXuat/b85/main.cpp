#include <iostream>
#define MAXN 100
using namespace std;
void NhapMangSoNguyen(int a[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}
int main ()
{
    int a[MAXN];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    NhapMangSoNguyen(a,n);
}
