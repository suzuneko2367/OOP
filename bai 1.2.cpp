#include <iostream>
using namespace std;
int main(){
  float m=42;
  float s=42;
  float tong1=m*60+s;
  cout<<tong1<<endl;
  float k=10;
  float mile=k/1.61;
  cout<<mile<<endl;
  float tong2=tong1/60;
  float ap1= tong2/mile;
  int phut=(int)ap1;
  int giay=(int)((ap1-phut)*60);
  cout<<phut<<" m "<<giay<<" s "<<endl;
  float tong3=tong2/60;
  float v=mile/tong3;
  cout<<v;
}
