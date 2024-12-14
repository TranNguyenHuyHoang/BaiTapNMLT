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

void hoanvi(int &a, int &b)
{
    double temp = a;
    a = b;
    b = temp;
}

bool snt(int x)
{
    if ( x <= 1) return false;
    for (int i = 2; i*i <= x; i++ )
    {
        if ( x % i == 0 )
        {
            return false;
        }
    } return true;

}

void nguyentotang (int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (snt(a[i]) && snt(a[j]))
            {
                if (a[i] > a[j]) hoanvi(a[i], a[j]);
            }
        }
    }
}

void XuatMang (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}


int main()
{
    int a[MAXN];
    int n;
    NhapMangSoThuc(a, n);
    nguyentotang(a, n);
    XuatMang(a, n);
    return 0;
}
