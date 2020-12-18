#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
  string nas;
  getline(cin, nas); // getline liest eine Zeile aus als String
  int n = stoi(nas); //

  for (int i = 0; i < n; i++){
    string s;
    getline(cin, s); // 2.Zeile wird ausgelesen im 1. Durchlauf
    string o = ""; // Init Output String, Leerstring
    if (s.length() > 10){
      o += s[0];
      o += to_string(s.length()-2); // 
      o += s[s.length()-1];
    } else{
      o = s;
    }
    o += "\n";
    cout << o;
  }}
