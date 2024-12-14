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

void vitrinhonhat (double a[], int n)
{
    int i;
    int vitri = i;
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if ( a[i] < min )
        {
            min = a[i];
            vitri = i;
        }
    }
    cout << "Vi tri a[" << vitri << "] dat gia tri nho nhat.";
}

int main()
{
    double a[MAXN];
    int n;
    NhapMangSoThuc(a, n);
    vitrinhonhat(a, n);
    return 0;
}
