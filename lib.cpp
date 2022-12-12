#include <iostream>
#include "lib.h"
using namespace std;

float max( float m[], int dimensione ){

    int i;
    float c;
    c=m[0];
    for (i=0; i<dimensione; i++){

        if(m[i]>=c){
            c=m[i];
        }
    }

    return c;

}
