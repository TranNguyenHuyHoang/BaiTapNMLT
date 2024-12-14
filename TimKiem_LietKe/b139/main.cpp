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

void lietkevitrilonnhat (double a[], int n)
{
    double max = a[0];
    int j;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    cout << "\nVay cac vi tri lon nhat la: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            j=i;
            cout << "\na[" << j << "] ";
        }
    }
}
int main()
{
    double a[MAXN];
    int n;

    NhapMangSoThuc(a,n);

    lietkevitrilonnhat(a, n);
    return 0;
}
