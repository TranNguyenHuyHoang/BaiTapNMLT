#include <iostream>
using namespace std;
void NhapMang(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
    cout << "a["<<i<<"]= ";
    cin >> a[i];
    }
}

int main()
{
    double a[5];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    NhapMang(a,n);

    return 0;
}
