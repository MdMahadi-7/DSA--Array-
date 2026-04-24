#include<iostream>
using namespace std;
class arr{
  int a[6]={10,6,51,38,9,100};
  public:
  void display(){
    for(int i=0;i<6;i++){
      cout<<a[i]<<" ";
    }
  }
  void insertion(){
    int val;
    for(int i=1;i<6;i++){
      val=a[i];
      int j;
      for(j=i-1;j>=0&&a[j]<val;j--){
        a[j+1]=a[j];
      } 
      a[j+1]=val;
    }
  }
};
int main(){
  arr ob;
  ob.display();
  cout<<endl;
  ob.insertion();
  ob.display();
}
