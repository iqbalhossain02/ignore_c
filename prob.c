#include<stdio.h>

int str_length(char str[]){
    int i, length;

    for(i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main(){
    char country[5];
    int length;

    while(1 == scanf("%s",country)){
        length = str_length(country);
        printf("Length: %d\n",length);
    }

    return 0;
}
