#include <iostream>
using namespace std;
/*
* * * * * 
  * * * * 
    * * *
      * *
        * 
*/
int main(){
    cout << "--->";
    int a;
    cin >> a;
    for(int i =0;i<a;i++){
        for(int space = 0;space<2*(i);space++){
            cout << " ";
        }
        for(int star=0;star<(a-i);star++){
            cout << "* ";
        }
        cout << endl;
    }
}