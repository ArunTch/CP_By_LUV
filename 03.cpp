#include<iostream>
using namespace std;

int main(){
    string t;
    cin >> t;
    string k;
   for (int i = 0; i < t.length();i++)
   {
       if (t[i]=='('&&t[i+1]==')')
       {
           k.push_back('o');
       }
       else if (t[i]=='G')
       {
           k.push_back('G');
       }else if (t[i]=='('&&t[i+1]=='a'&&t[i+2]=='l'&&t[i+3]==')')
       {
           k.push_back('a');
           k.push_back('l');
       }
   }
   cout<<k;
   return 0;
}