#include <iostream>
#define MAXN 100
using namespace std;

void NhapMangSoThuc(double a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void XuatMang(double a[], int n)
{
    cout << "Mang cuoi cung la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void lietketrongdoanreal (double a[], int n, double &x, double& y)
{
    double b[MAXN];
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
    double a[MAXN];
    int n;

    NhapMangSoThuc(a,n);

    double x,y;
    cout << "Nhap khoang [x,y]:";
    cin >> x >> y;
    cout << "Khoang cua ban la: [" << x << "," << y << "]" << endl;

    lietketrongdoanreal(a, n, x, y);
    return 0;
}
