    #include <bits/stdc++.h>
    using namespace std;
  // Ansatz Primfaktorzerlegung ohne "wirklich" in Primfaktoren zu zerlegen
    int main(){
        unsigned long int n; //Datentyp beachten
        cin>>n;
        cout<<n/2<<endl; // first line number of prime factors
        while(n>3){
            cout<<2<<" ";
            n-=2; //postinkrement
        }
        cout<<n;
    }


