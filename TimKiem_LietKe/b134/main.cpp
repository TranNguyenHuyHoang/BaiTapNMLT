#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoThuc(int a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    cout << "Mang cuoi cung la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void lietketrongdoannguyen (int a[], int n, int x, int y)
{
    int b[MAXN];
    int ib = 0;
    for (int i = 0; i < n; i++)
    {
        if ((x <= a[i] && a[i] <= y) || (y <= a[i] && a[i] <= x))
        {
            b[ib++] = a[i];
        }
    }

    XuatMang(b,ib);
}
int main()
{
    int a[MAXN];
    int n;

    NhapMangSoThuc(a,n);

    double x,y;
    cout << "Nhap khoang [x,y]:";
    cin >> x >> y;
    cout << "Khoang cua ban la: [" << x << "," << y << "]" << endl;

    lietketrongdoannguyen(a, n, x, y);
    return 0;
}
