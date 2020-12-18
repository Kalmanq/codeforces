#include <iostream>
#include <math.h>
#include <string>
//#include <boost/algorithm/string/erase.hpp>

using namespace std;
int groesseErmitteln( int zahl, int basis = 1 )
{
	if( zahl < basis )
		return basis / 10;
	return groesseErmitteln( zahl, basis * 10 );
}
int quersumme( int zahl )
{
	int qs = 0;
	int teiler = groesseErmitteln( zahl );
	for( ; zahl >= 1; zahl %= teiler, teiler /= 10 )
		qs += zahl / teiler;
	return qs;
}
int main()
{
  string nas;
  getline(cin, nas); // getline liest eine Zeile aus als String
  int n = stoi(nas); // Convert string to integer
int counter = 0;
  for (int i = 0; i < n; i++){
    string s;
    getline(cin, s); // 2.Zeile wird ausgelesen im 1. Durchlauf
    string o = ""; // Init Output String, Leerstring
string delimiter = " ";
size_t pos = 0;
string token;
int cou = 0;
while ((pos = s.find(delimiter)) <= s.length()) {
    token = s.substr(0, pos);
    o += token;
    s.erase(0, pos + delimiter.length());
    if (stoi(token)==1){
      cou++;
    }
}
if(cou > 1){
  counter++;
}

}
  cout<<counter;

}
