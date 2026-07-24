# include <iostream>
using namespace std;
int callByVal(int a , int b){
    a=10;
    b=20;
    a=b;
    b=a;
    return a;
}
void callByreference (int &a , int &y){
    x=10;
    y=20;  
}
voi Callbyaddress( int *c, int*d){
    *c=10;
    *d=20;
}

int main(){
  cout<< callbyValue(20,10)<< endl;
  int x=20;
    y=10;
    callByReference(x,y);
    cout<<x<< "";
    cout<< y <<endl;
    int c=20;
    int d=10;
    callByaddresss(&c,&d);
    cout<<c<< "";
    cout<<d<< endl;
    return 0;

}
