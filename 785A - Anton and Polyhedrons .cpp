#include <bits/stdc++.h>
using namespace std;
int main(){
unsigned long int n,i,c=0;
cin>>n; //erste Zahl
for(i=0;i<n;i++) // for Schleife läuft nur so lange wieviel Eingaben existieren
{string s; cin>>s;
if(s[0]=='T') // Anstatt ganzen String zu vergleichen wird nur erster String geprüft
c+=4;
if(s[0]=='C')
c+=6;
if(s[0]=='O')
c+=8;
if(s[0]=='D')
c+=12;
if(s[0]=='I')
c+=20;}
cout<<c;
}