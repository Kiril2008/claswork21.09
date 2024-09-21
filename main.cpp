#include <iostream>
#include <string>
#include <algorithm>
//#include <cstring>
//#include <Windows.h>
//#include <ranges>
#include <vector>
//#define O cout
//#define E endl;
//#define A(x,y) (x>y?x:y)
//#define P(x) (x%2==0? "parne: neparne")
// red "\033[0;31m"
//#define restart "\033[0m"
//using namespace std;
//int main()
//{
   /*O <<red<< "preproces\n"<<restart<<E
    int x = 5 , y=7;
    cout<<A(x,y)<<E */




  //  O<<"ryadky\n"<<E
   // char s = 'W';
   // cout<< int(s)<<E
   // string txt = "hello worold";
   // cin >> txt ;
    ///getline(cin,txt);
    //cout<<txt.size();
    //char txt2[15] = "hello world";
    //cin.getline(txt2, 100);


    //char s ;
   // cin >>s ;
    //cout<<(s==toupper(s)?)
   // if(s==toupper(s)) cout<< char(tolower(s));
   // else cout <<toupper(s);
    //cout<<(s==char(toupper(s)) ? char(tolower(s)): char (toupper(s)));


 //string txt;
 //getline(cin,txt);
 //char s;
 //cin>>s;
 //txt.push_back(s);
 //cout<<txt;
//}
using namespace std;
int main() {
 cout<<"enter setntence:\n";
 string text;
 getline(cin,text);

 transform(text.begin(), text.end(), text.begin(), ::tolower);

 int c ;
 cout<<"enter sentn:\n";
 cin >> c ;
 c--;
 if(c >= 0 && c < text.size());
 text.erase(c, 1);
 cout<<text;
}


 /*cout<<text;
 for (char c: text ) {
  if(c== 'a' or c=='o' or c=='y' or c=='e' or  c== 'i'  ) {
  }
 }
 char text[100];
 cin.getline(text,100);
 for(char c : text) {
  c = tolower(c);
  if(c== 'a' or c=='o' or c=='y' or c=='e' or  c== 'i'  ){
   cout <<c ;
  }*/







