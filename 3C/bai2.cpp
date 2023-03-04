/*Viết chương trình nhập vào một số N là số phần tử của dãy số, sau đó nhập vào một dãy số nguyên gồm N phần tử. In ra:
	Phần tử nhỏ nhất
	Phần tử lớn nhất
	Tổng các phần tử chẵn
	Số lượng các phần tử lẻ
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1000];
    cin >> n;
    for (int i=0; i<n; i++)
    cin >> a[i];
int max_=a[0], min_=a[0];
int sumc=0, countl=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>max_) max_=a[i];
        if (a[i]<min_) min_=a[i];
        if (a[i]%2==0) sumc+=a[i];
        if (a[i]%2!=0) countl++;
    }
        cout << max_ << endl;
        cout << min_ << endl;
        cout << sumc << endl;
        cout << countl << endl;

}
