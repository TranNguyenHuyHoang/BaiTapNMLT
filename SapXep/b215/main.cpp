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

void hoanvi(double &a, double&b)
{
    double temp = a;
    a = b;
    b = temp;
}

void sapxepduong (double a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if ( a[i] > 0 && a[j] > 0 )
            {
                if(a[i] > a[j]) hoanvi(a[i],a[j]);
            }
        }
    }
}

void XuatMang (double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}


int main()
{
    double a[MAXN];
    int n;
    NhapMangSoThuc(a, n);
    sapxepduong(a, n);
    XuatMang(a, n);
    return 0;
}
