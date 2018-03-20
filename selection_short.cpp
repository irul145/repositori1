#include <iostream>

using namespace std;

int main(int argv, char **argc){

    int data[5]={5,2,6,4,1},banyak_data=5,key,i,j,tampung;

    for(i=0; i < banyak_data-1;i++){
        key=i;
        for(j=i+1;j<banyak_data;j++){
            if(data[key] > data[j]){
              key=j;
            }
        }
        tampung=data[key];
        data[key]=data[i];
        data[i]=tampung;

    }

    for(int x :data){
            cout << x <<" ";
        }

    return 0;
}
