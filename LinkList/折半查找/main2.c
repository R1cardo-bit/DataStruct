//左闭右开
#include<stdio.h>

#define MAXSIZE 10

typedef struct{  
    int data[MAXSIZE];
    int length;
    
}sqllist;

int fun(int target,sqllist q){
    int left = 0;
    int right = q.length - 1;
    
    while(left < right){
        int mid = (left + (right - left)) / 2;
        if(mid < target){
            left = mid + 1 ;

        }else if(mid > target){
            right = mid ;
        }else{
            return mid;
        }
    }
    return -1;
}

void main(){
    sqllist q = {{1,2,3,5,7},5};
    fun(3,q);
}
