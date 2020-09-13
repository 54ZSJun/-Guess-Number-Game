#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  char a;
  for (int i = 0; i < 100;i++){
    if(i%5==0 &&i!=0){
      cout << endl;
    }
    if(i<10){
      cout << "0";
    }
    cout << i;
    if(i%9==0){
      cout << "!";
    }
    else if(i%9==1) cout << "@";
    else if(i%9==2) cout << "#";
    else if(i%9==3) cout << "$";
    else if(i%9==4) cout << "%";
    else if(i%9==5) cout << "^";
    else if(i%9==6) cout << "&";
    else if(i%9==7) cout << "*";
    else if(i%9==8) cout << "(";
    else cout << "~";
    cout << "    ";
  }
  cout << "\n\n从0-99之间任意选择一个数A，把A的十位与个位相加，再用A减去这个和。\n例如：你选的数是23，然后2+3=5，然后23-5=18。\n在图表中找出与最后得出的数所相应的图形，并把这个图形牢记心中。\n输入你所想的数：";
  cin >> a;
  cout << "我猜你想的符号是:“！”";
  return 0;
}