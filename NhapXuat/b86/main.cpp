#include <iostream>
using namespace std;
void XuatMangSoThuc (double a[], int n)
{
    cout << "Mang So Thuc: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
void NhapMangSoThuc (double a[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

int main()
{
    double a[100];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    NhapMangSoThuc(a,n);
    XuatMangSoThuc(a,n);
    return 0;
}
