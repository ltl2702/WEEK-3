/*Viết chương trình in ra tam giác Pascal bậc n, ví dụ với n = 6
1
1  1
1  2  1
1  3  3  1
1  4  6  4  1
1  5 10 10  5  1
Cần căn lề các cột.
*/

#include <bits/stdc++.h>
using namespace std;

int pascal(int j, int i)
{
    if (j==0||j==i) return 1;
    else return pascal(j-1,i-1)+ pascal(j,i-1);
}
int main()
{
  int n;
  cin >> n;
  for (int i=0; i<=n; i++){
    for (int j=0; j<=i; j++){
        cout << pascal(j,i)<<" ";
    }
    cout << endl;
  }
}
