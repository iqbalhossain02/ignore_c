#include<stdio.h>

// add
float add(float a, float b){
    float sum = a + b;

    return sum;
}

// subtrack
float subtrack(float a, float b){
    float sub = a - b;

    return sub;
}

// multiply
float multiply(float a, float b){
    float mul = a * b;

    return mul;
}

// divisor
float divisor(float a, float b){
    float div = a / b;

    return div;
}

int main(){
    float a,b;
    printf("Enter the value of a & b: \n");
    scanf("%f%f",&a, &b);

    float add_result = add(a,b);
    float subtrack_result = subtrack(a,b);
    float multiply_result = multiply(a,b);
    float divisor_result = divisor(a,b);

    printf("Add: %f, Subtract: %f, Multiply: %f, Divisor: %f",add_result, subtrack_result, multiply_result,divisor_result);

    return 0;
}



