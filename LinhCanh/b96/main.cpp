#include <iostream>
#define MAXN 100
using namespace std;
void NhapMangSoThuc (double a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n ; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void duongnhonhat (double a[], int n)
{
    double min = -1;

    for (int i = 0 ; i < n; i++)
    {
        if ( a[i] > 0)
        {
            if ( min == -1 || a[i] < min)
            {
                min = a[i];
            }
        }
    }

    if (min != -1)
    {
        cout << "So duong nho nhat la: " << min;
    }
        else cout << min;
}
int main()
{
    double a[MAXN];
    int n;
    NhapMangSoThuc(a, n);
    duongnhonhat(a, n);
    return 0;
}
