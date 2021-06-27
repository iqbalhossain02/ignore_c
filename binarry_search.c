#include<stdio.h>

int binary_search(int ara[], int low, int high, int key);

int main(){
    int ara[] = {1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low = 0, high = 15;
    int key = 25;
    int mid_index = ((low+ high) / 2);

    int binary_search(ara, low, high, key,mid_index);
    if(low > high){
        printf("%d is not in the array. \n",key);
    }
    else{
        printf("%d is found in the array. It is the %dth element of the array. \n",ara[mid_index],mid_index);
    }

    return 0;
}

int binary_search(int ara[],int low_index,int high_index,int num,int mid_index){


    while(low_index <= high_index){

        if(num == ara[mid_index]){
            break;
        }
        if(num > mid_index){
            low_index = mid_index + 1;
        }
        if(num < mid_index){
            high_index = mid_index - 1;
        }
    }


    return mid_index;

}
