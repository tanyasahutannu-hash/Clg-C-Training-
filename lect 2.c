// lecture 2 - c programming
//topic: variables,operators,type casting ,increment-decrement,if-else
#include<stdio.h>
int main(){
    //1.Variable and datatypes
    int age = 20;  //integer variable
    float pi = 3.14;   //float variable
    char grade = 'A';    //character variable

    printf("age = %d\n",age);
    printf("pi = %.2f\n",pi);
    printf("garde = %c\n",grade);

    //2.Taking input from user
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("you entered :%d\n\n",a);

    //3.Arithmetic operator 
    int x = 10,y = 3;
    printf("x + y = %d\n", x + y);  //addition
    printf("x - y = %d\n",x - y);  //subtraction
    printf("x * y = %d\n", x * y);   // multiplication
    printf("x / y = %d\n", x / y);  //division(integer)
    printf("x % y = %d\n\n", x % y);  //modulus(remainder)

    //4. Type casting(to get decimal result in division)
    float result = (float)x/y;   //explit type casting
    printf("type casted division :%.2f\n\n",result);

    //5. increment and decrement 
    int num = 5;
    printf("num = %d\n",num);
    printf("num++ = %d(post - increment)\n",num++);  //print first, then increase
    printf("now num = %d\n",num);
    printf("++num = %d(pre - increment)\n",++num);  // increase first ,then print
    printf("now num = %d\n\n",num);


    //6. if-else example
    int marks = 73;
    if( marks>=75){
        printf(" grade: A\n");
    }else if (marks >= 60){
        printf("grade B\n");

    }else{
        printf("fail \n");
    }

    //7.size of operator 
    printf("\n size of int = %zu bytes\n", size of (int));
    printf("size of float = %zu bytes\n",size of (float));
    printf(" size of char = %zu bytes\n",size of (char));


    //8.  ASCII example 
    int ascii = 65;
    char ch = ascii; //converting int to char
    printf("ascii value %d = character '%c'\n",ascii,ch);

    return 0;

}