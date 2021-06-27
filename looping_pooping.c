#include<stdio.h>

//int b_search(int ara,int low, int high, int key)

int main(){
    int ara[] = {1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low_index = 0, high_index = 15;
    int mid_index, num = 97;

    while(low_index <= high_index){
        mid_index = ((low_index + high_index) / 2);

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

    if(low_index > high_index){
        printf("%d is not in the array. \n",num);
    }
    else{
        printf("%d is found in the array. It is the %dth element of the array. \n",ara[mid_index],mid_index);
    }

    return 0;

}


















