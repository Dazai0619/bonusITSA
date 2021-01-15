#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#define MAX 10000

void push(int *top,int *stack,int num)  //將數字放進stack
{
    stack[++(*top)] = num;  //先將top指向上面一個的位置再放入數字
}

int pop(int *top, int *stack)   //從stack推出數字
{
    int num;
    num = stack[(*top)--];  //先將數字丟出後再將top指向下面一個的位置
    return num;
}

int main()
{
    char input[MAX];
    int stack[MAX],top=-1;  //將top歸零
    while(1)
    {
        gets(input);
        if (input[0] == '0')    //若出現'0'就停止輸出
            break;
        int a,b;
        for (int counter = 0;counter < strlen(input);counter++)
        {
            if (isdigit(input[counter]))    //若輸入的是0~9
                push(&top,stack,input[counter] - '0');  //放入stack
            else    //若輸入的是'+'、'-'、'*'、'/'
            {
                switch(input[counter])
                {
                    case '+':   //'+'的情況
                        a = pop(&top,stack);    //從stack中拿出前兩個數字
                        b = pop(&top,stack);
                        push(&top,stack,b + a); //進行運算後放回stack 
                        break;

                    case '-':   //'-'的情況
                        a = pop(&top,stack);    //從stack中拿出前兩個數字
                        b = pop(&top,stack);
                        push(&top,stack,b - a); //進行運算後將結果放回stack
                        break;

                    case '*':   //'*'的情況
                        a = pop(&top,stack);    //從stack中拿出前兩個數字
                        b = pop(&top,stack);
                        push(&top,stack,b * a); //進行運算後將結果放回stack
                        break;
                        
                    case '/':   //'/'的情況
                        a = pop(&top,stack);    //從stack中拿出前兩個數字
                        b = pop(&top,stack);
                        push(&top,stack,b / a); //進行運算後將結果放回stack
                        break;

                    case '%':   //'%'的情況
                        a = pop(&top,stack);    //從stack中拿出前兩個數字
                        b = pop(&top,stack);
                        push(&top,stack,b % a); //進行運算後將結果放回stack
                        break;
                }
            }
        }
        printf("%d\n",pop(&top,stack)); //將最終結果印出
    }
}
