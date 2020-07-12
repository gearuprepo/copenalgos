#include<iostream>
bool test();
void mergesort(int*,int,int);
void swap(int*,int*);
void merge(int*, int,int,int);

int main(int argc, char const *argv[])
{
    std::cout<<"Merge Sort implementation in CPP\n";
    test();
    std::cout<<"\n";
    return 0;
}

//Testcases
bool test(){
    std::cout<<"Testing...\n";
    //int arr[5] = {10, 1, 8, 2, };
    int arr[8] = {10,1,7,2,11,15,66,32};
    int len = sizeof(arr)/sizeof(arr[0]);    //int - 4bits, sizeof(arr) = 4B * 5 = 20 bit
    mergesort(arr,0,len-1);
    return true;
}
    /*eg->[10,1,7,6]
    rec: iter 1- [10,1]    [7,6]
    rec: iter 2.1- [1,10]
    rec: iter 2.2- [6,7]
    merge() -> [1,6,7,10]
    */
void mergesort(int* inp,int start,int end){
    //if no of input elements is 2, compare and swap and return
    //left recursion
    //right recursion
    //merge
    if ((end-start) <1){//if array has no elements, just return
    //Return
    }else if((end-start) == 1){// Two elements, needs compare and swap
        swap(&inp[start],&inp[end]);
    }else{
        int mid = ( start + end )/2;
        mergesort(inp,start,mid); //Left recursion
        mergesort(inp,mid+1,end); //Right recursion
        merge(inp,start,mid, end);
    }
    std::cout<<"hello";
}

void merge(int* inp,int start,int mid,int end){
    //start to mid is sorted
    //mid+1 to end is sorted
    int lctr = start;
    int rctr = mid+1;
    int ctr=0;
    //left 1,10, right 6,7
    int buff[end+1] = {};
    while (ctr<=end){
        if(lctr==mid){
            buff[ctr] = inp[rctr];
            rctr++;
        }else if(rctr == end){
            buff[ctr] = inp[lctr];
            lctr++;
        }
        else if(inp[lctr]>inp[rctr]){
            buff[ctr] = inp[rctr];
            rctr++;
        }else{
            buff[ctr] = inp[lctr];
            lctr++;
        }
        ctr++;
    }
    std::cout<<"End";
}

//O(n) = 1
void swap(int* lt,int* rt){
    if(*rt<*lt){
        int temp = *lt;
        *lt = *rt;
        *rt =temp;
    }
}