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
void vitriletang (double a[], int n)
{
    for (int i = 1; i < n-1; i += 2)
    {
        for(int j = i + 2; j < n; j += 2)
        {
            if(a[i] > a[j]) hoanvi(a[i],a[j]);
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
    vitriletang(a, n);
    XuatMang(a, n);
    return 0;
}
