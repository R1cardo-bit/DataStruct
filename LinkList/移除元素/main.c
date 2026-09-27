//leetcode：27.移除元素
#include<stdio.h>

#define MAXSIZE 10

typedef struct {
    int data[MAXSIZE];
    int length;
}sqllist;


void deletenumber(sqllist q,int target){
    int p ;
    int x = 0;
    for( p = 0;p < q.length;p++){
        if(q.data[p] != target){
            q.data[x] = q.data[p];
            x++;
        }
    }
    return q;
}

void main(){
    sqllist q = {{2,3,2,3},4};
    deletenumber(q,2);

}