#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
char s[100],t=0,k=0;
cin>>s;
for(int i=0;i<strlen(s);i++)
{
if(s[i]>='A'&&s[i]<='Z')
t++;
if(s[i]>='a'&&s[i]<='z')
k++;
}
if(t>k)
strupr(s);
else
strlwr(s);
cout<<s;
return 0;
}
