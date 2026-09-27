//有序数组的平方
//leetcode：997
//注意要思考负数的情况
//暴力解：先平方，然后排序
//空间换时间，新增一个数组，然后空间复杂度o（n）
#include<stdio.h>

#define MAXSIZE 10

typedef struct {
    int data[MAXSIZE];
    int length;
}sqllist;

sqllist sort_link(sqllist q){
    //新数组
    sqllist result;
    result.length = q.length;
    int k = q.length - 1;

    for (int i = 0, j = q.length - 1;i <= j;){
        if(q.data[i] * q.data[i] > q.data[j] * q.data[j]){
            result.data[k--] = q.data[i] * q.data[i];
            i++;
        }else{
            result.data[k--] = q.data[j] * q.data[j];
            j--;
        }

    }
    return result;
}