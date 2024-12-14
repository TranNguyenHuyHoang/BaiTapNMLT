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


void sapxepgiam (double a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ( a[i] < a[j] )
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
    cout << "\nMang cuoi cung la: ";
    for (int i = 0; i < n; i++)
    {
        cout  << a[i] << " ";
    }
}

int main()
{
    double a[MAXN];
    int n;

    NhapMangSoThuc(a, n);
    sapxepgiam(a, n);
    XuatMang(a, n);

    return 0;
}
