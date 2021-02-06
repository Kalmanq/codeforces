/******************************************************************************

*******************************************************************************/

#include <iostream>

using namespace std;


/*int count_characters_B(string s) {
 
 int count_B = 0;
  for (int i = 0; i < s.size(); i++)
    if (s[i] == 'B') count_B++;

  return count_B;
}

*/

 
int main()
{
    int i;
    string s; 
    cin>> i >> s;
    
    //count_characters_A(string s);
    int count_A = 0;
    for (int i = 0; i < s.size(); i++)
    if (s[i] == 'A') count_A++;
    
    //count_characters_D(string s);
    int count_D = 0;
    for (int i = 0; i < s.size(); i++)
    if (s[i] == 'D') count_D++;
    
    string Anton;
    string Danik;
    string Friendship;
    if (count_A > count_D)
    {
    cout << "Anton";
    }
    
    else if (count_A < count_D)
    {
    cout << "Danik"; 
    }
    
    else if (count_A == count_D)
    {
    cout << "Friendship";
    }
    return 0;
}
