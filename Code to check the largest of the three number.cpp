// SAMEER YASIN 
// 24070124092
// ENTC B1
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER THE THREE NUMBERS : ";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c){
        cout<<"THE LARGEST OF THE THREE NUMBER IS : "<<a<<endl;
    }else if(b>c && b>c){
        cout<<"THE LARGEST OF THE THREE NUMBER IS : "<<b<<endl;
    }else{
        cout<<"THE LARGEST OF THREE NUMBER IS : "<<c<<endl;
    }
    return 0;

}
/*Sample Output:
ENTER THE THREE NUMBERS : 21
9
18
THE LARGEST OF THREE NUMBER IS : 21*/
