#include <iostream>
#include "lib.h"
using namespace std;

int main(){

    int i, a;
    cin >> a;
    float m[a], c;
    for(i=0; i<a; i++){

        cin >> m[i];
    }
    
    c=max(m, a);
    cout << c << endl;

}
