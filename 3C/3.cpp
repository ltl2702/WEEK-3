/*Số đối gương. Cho các số A và B, đếm số các số nguyên N sao cho A <= N <= B và N là một số đối gương.
Ví dụ, các số đối gương: 121, 11, 11411
Các số không đối gương: 122, 10
Input:
Dữ liệu đọc từ input chuẩn (bàn phím). Dòng đầu chứa số tự nhiên T là số test case, N dòng tiếp theo, mỗi dòng chứa hai giá trị A và B trên cùng một dòng
Output:
Với mỗi test case, in giá trị cần thiết trên một dòng.
Ràng buộc: 1 <= T <= 100
0 <= A <= B <= 10^5
*/

#include<bits/stdc++.h>
using namespace std ;

string doixau(int x)
{
    string ans = "";
    char c ;
    int du  ;
    while(x > 0)
    {
        du = x % 10 ;
        c = du + '0' ;
        x = x/10 ;
        ans = c + ans ;
    }
    return ans ;
}
bool check (string s )
{
    int i = 0 , j= s.size() -1 ;
    while( i < j && s[i] == s[j])
    {
        i++ ;
        j-- ;
    }
    if(i>=j) return true ;
    return false ;
}
int main()
{
    int n , a , b , cnt = 0  ;
    string s ;
    cin >> n ;
    for(int i = 1 ;i <= n ; i++)
    {
        cin >> a >> b ;
        for(int j = a ; j <=b ; j++)
        {
            s = doixau(j) ;
            if(check(s)) cnt ++ ;
        }
        cout << cnt << endl ;
        cnt = 0 ;
    }
}
