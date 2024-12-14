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

void haikhong (int a[], int n)
{
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0 && a[i+1] == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "Ton tai hai gia tri khong lien tiep";
    } else cout << "Khong ton tai";

}

int main()
{
    int a[MAXN];
    int n;
    NhapMangSoNguyen(a, n);
    haikhong(a, n);
    return 0;
}
