#include <iostream>
using namespace std;
/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
int main(){
    int a =5;
    for(int i =0;i<a;i++){
        for(int space=0;space<2*(a-i-1);space++){
            cout << " ";
        }
        for(int star = 0;star < i+1;star++){
            cout << "* ";
        }
        cout << "\n";
    }
}