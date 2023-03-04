//Viết chương trình nhập từ bàn phím một xâu kí tự độ dài tối đa 100, sau đó kiểm tra xem xâu kí tự đó có đối xứng hay không.
//Chẳng hạn “abcba", “abba" là đối xứng, còn “abcda” không đối xứng. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.

 #include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  string r="";
  for (int i=s.size()-1; i>=0; i--)
    r+=s[i];

  if (r==s) cout << "Yes";
  else cout << "No";
}
