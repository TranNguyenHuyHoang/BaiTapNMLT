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

void sapxeptang (double a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ( a[i] > a[j] )
            {
                double temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void XuatMang(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

bool thembaotoan(double a[], int&n, int k, double x)
{
    if (k >= 0 && k <= n)
    {
        for (int i = n; i > k; i--)
            a[i] = a[i-1];
        a[k] = x;
        n++;
        sapxeptang(a,n);
        return true;
    }
    return false;

}

int main()
{
    double a[MAXN];
    int n;

    NhapMangSoThuc(a, n);
    sapxeptang(a, n);

    cout << "Mang ban dau la: ";
    XuatMang(a, n);

    int k;
    cout << "\nNhap vi tri de dua gia tri vao: ";
    cin >> k;

    double x;
    cout << "Nhap gia tri: ";
    cin >> x;

    if (thembaotoan(a, n, k, x))
    {
        cout << "Mang sau khi chen vao la: ";
        XuatMang(a, n);
    }
    return 0;
}
