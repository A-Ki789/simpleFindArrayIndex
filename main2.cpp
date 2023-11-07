#include <iostream>

using namespace std;

int searchArray(int numbers[],int size,int value){
    for(int i=0; i <size;i++){
        if (numbers[i]==value)
            return i;
    }
    return -1;
}

int main(){
    int numbers[]={1,2,3,4,5};
    int result =searchArray(numbers,size(numbers),10);
    cout<<result<<endl;
    return 0;
}