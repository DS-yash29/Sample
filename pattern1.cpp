#include<iostream>
using namespace std;

/* The Given Patternn is 
    1 2 3 
    4 5 6 
    7 8 9
*/

int main(){
    int row = 3,i=0,j,sum = 1;
    while(i<row){
        j = 0;
        while(j<row){
            cout<<sum<<" ";
            sum ++;
            j++;
        }cout<<endl;i++;
    }
    return 0;
}