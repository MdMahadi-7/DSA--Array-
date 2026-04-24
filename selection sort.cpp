#include<iostream>
using namespace std;
class arr{
  int a[5]={10,7,98,43,0};
  public:
  void display(){
    for(int i=0;i<5;i++){
      cout<<a[i]<<" ";
    }
  }
  void selection(){
    int temp,mn;
    for(int i=0;i<4;i++){
      mn=i;
      for(int j=i+1;j<5;j++){
        if(a[j]>a[mn]){
          mn=j;
        }
      }
      if(mn!=i){
        temp=a[i];
        a[i]=a[mn];
        a[mn]=temp;
      }
    }
  }
};
int main(){
  arr ob;
  ob.display();
  cout<<endl;
  ob.selection();
  ob.display();
}
