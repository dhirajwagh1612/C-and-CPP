#include <iostream>
#include <string>
using namespace std;
int main()
{
int n,i;
char a[20];
cout << a;
cin >> a;
cout << a;
for(i=0; n>0; i++)
{
  a[i]=n%2;
  n=n/2;
}

for (i=i-1; i>=0; i--)
{
  cout<<a[i];

}
return 0;
}
