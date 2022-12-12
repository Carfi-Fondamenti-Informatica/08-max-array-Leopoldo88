#include<iostream>
using namespace std;
void max(int v[N]){
int min;
int temp;
for(int i=0;i<N-1;i++)
        {
            min=i;
            for(int j=i+1;j<N;j++)
                {
                    if(v[min]>v[j])
                        min=j;
                    temp=v[min];
                    v[min]=v[i];
                    v[i]=temp;
                    count++;
                }
        }
 cout<<v[N-1] endl;
}
