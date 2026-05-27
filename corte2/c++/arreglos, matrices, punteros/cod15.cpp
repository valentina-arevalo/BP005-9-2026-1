#include <iostream>
using namespace std;

int main(){

int m[2][3]={
{1,2,3},
{4,5,6}
};

int i,j;

for(i=0;i<2;i++){

for(j=0;j<3;j++){

cout << "%d ",m[i][j];

}

cout << "\n";

}

return 0;

}
