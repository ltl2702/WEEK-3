//Viết chương trình nhập vào một dãy số. In ra giá trị trung bình (μ) và phương sai (σ^2) của dãy số đó.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long> a;
    for (long x; cin >> x; a.push_back(x)){}
    double sum=0,x=0;
    for (long unsigned int i=0; i<a.size(); i++)
        sum+=a[i];
    double tb=sum/a.size();
     for (long unsigned int i=0; i<a.size(); i++)
        x+=(a[i]-tb)*(a[i]-tb);
       cout << setprecision(2) << fixed<<1.0*tb << endl;
       cout << setprecision(2) << fixed<<1.0*x/a.size() << endl;


}
