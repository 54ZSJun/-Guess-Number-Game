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
  cout << "\n\n��0-99֮������ѡ��һ����A����A��ʮλ���λ��ӣ�����A��ȥ����͡�\n���磺��ѡ������23��Ȼ��2+3=5��Ȼ��23-5=18��\n��ͼ�����ҳ������ó���������Ӧ��ͼ�Σ��������ͼ���μ����С�\n���������������";
  cin >> a;
  cout << "�Ҳ�����ķ�����:������";
  return 0;
}