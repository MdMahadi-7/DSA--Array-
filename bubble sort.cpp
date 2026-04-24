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
  void bubble(){
    int temp;
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if(a[j]<a[j+1]){
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
    }
  }
};
int main(){
  arr ob;
  ob.display();
  cout<<endl;
  ob.bubble();
  ob.display();
}
