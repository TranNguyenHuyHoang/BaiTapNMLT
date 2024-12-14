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

void LietKeSoChan (int a[], int n)
{
    cout << "Cac gia tri chan la: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0) cout << a[i] << " ";
    }

}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a,n);
    LietKeSoChan(a,n);
}
