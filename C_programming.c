#include<stdio.h>

void reverse(int arr[],int lenght){
    for(int a = 0; a <= lenght; a++){
        for(int c = lenght; c >= 0; c++){
            arr[c] = arr[a];
        }
    }
}

int main() {

    // 

    // Practise set 
    /*
    int lenght = 9;
    int arr[lenght];
    for(int a = 0;a<=lenght;a++){
        arr[a] = (a+1) * 5 ;
    }
    
    for(int a = 0;a<=lenght;a++){
        printf("The value at element %d is %d \n",a+1,arr[a]);
    }
    
    int arr[4];
    int *pointer = &arr[0];
    printf("The addres stored int the pointer is %d\n",pointer);
    if(pointer+2==&arr[2]){
        printf("Yes the addres and location of the pointer is same");
    }
    else{
        printf("No the address is not same in the pointer");
    }
    
    Repeat problem from taking the input from the user
    int size_of_array ,multipled_by;
    printf("Enter the number you want to multiple\n");
    scanf("%d",&multipled_by);
    printf("Enter the size of the array \n ");
    scanf("%d",&size_of_array);
    size_of_array = size_of_array - 1;
    int array[size_of_array];
    for(int a = 0; a<=size_of_array; a++){
        array[a] = (a+1)*multipled_by;
        printf("The element at index %d is %d \n",a+1,array[a]);
    }
    */
    int hello[4];
    hello[0]=1;
    hello[1]=2;
    hello[2]=3;
    hello[3] =4 ;
    reverse(hello,4);
    for(int heell = 0;heell<=4; heell++){
        printf("%d\n",hello[heell]);
    }
    return 0;
}