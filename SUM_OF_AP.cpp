// Print nth term of an AP & sum of nth term of an AP
#include <iostream>
using namespace std;
int main() {
int n;
cout<< "Enter the no. of terms"<<endl;
cin>>n;
int a,d,an=0,sn=0;
cout<<"enter a & d"<<endl;
cin>>a>>d;
for(int i=1;i<=n;i++)
{
    an=a+((i-1)*d);
    cout<<"Term "<<i<<" = "<<an<<endl;
    sn=sn+an;
}
cout<<"Sum ="<<sn<<endl;

    return 0;
}
