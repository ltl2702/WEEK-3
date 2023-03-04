//Tìm lặp. Viết chương trình nhập một số nguyên dương N <= 10000 và một chuỗi gồm N số trong khoảng từ 1 đến N,
//xác định xem trong chuỗi đó hai số nào bằng nhau hay không. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.


#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,a[1000],b[1000];
  cin >> n;
  int dem=0;

  for (int i=1;i<=n;i++)
  {
          cin >> a[i];
          b[a[i]]=0;
  }

  for (int i=1;i<=n;i++)
  {
      b[a[i]]++;
  }

  for (int i=1;i<=n;i++)
  {
      if (b[a[i]]>1) dem++;
  }

  if (dem>0) cout <<"Yes";
  else cout <<"No";
}
