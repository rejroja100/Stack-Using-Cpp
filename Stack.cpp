#include<stdio.h>
#define Capasity 3

int Stack[Capasity];
int top = -1;

void push(int item){

    if(top < Capasity - 1){
        top = top + 1;
        Stack[top] = item;
        printf("The pushed element is %d.\n", item);
    }
    else{
        printf("Exception! no space.\n");
    }

}

int pop(){
    if(top <= Capasity -1){
        int value = Stack[top];
        top -= 1;
        printf("the popped value is %d\n", value);
        return value;
    }
    else{
        return -1;
    }

}

int peek(){

    if(top >= 0){
        return Stack[top];
    }
    else {
        printf("sorry, the stack is empty.\n");
        return -1;
    }

}

int main(){

    push(4);
    push(19);
    push(39);
    pop();
    pop();
    push(10);
    push(24);
    printf("the peek element is %d.\n", peek());

    for(int i = 0; i < Capasity; i++){
        printf("%d ", Stack[i]);
    }


    return 0;
}
