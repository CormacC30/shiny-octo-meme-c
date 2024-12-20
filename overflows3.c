#include <stdio.h>
#include <stdlib.h>

//continued...

int main(){
    
    // fifth example
    // int a[10];
    // int i;
    // for (i = 0; i < 10; i++) {
    //    a[i] = 0;

    //    printf("array a element %d\n", a[0]);
    //    // element 10 is out of bounds of the array and gives wild answers
    // }
 

    /*stack smashing vvv*/

    // int x=0;
    // int y[10];
    // int j;
    // for (j = 0; j <= 10; j++) {
    //     y[j]=27;
    //     // printf("The value of x is %d\n", x);
    // } 
    // printf("The value of x is %d\n", x);

    // sixth example

    // int n=0;
    // printf("The address of n is %x\n", &n);


    // seventh example

    // int x=0;
    // int *p;
    // p = &x;
    // printf("The address of x is %x\n", p);
    // printf("The value of x is %d\n\n", *p);
    // *p = 27;
    // printf("The value of x is %d\n", x);


// example 8

    int *buffer;
    int i;
    buffer = malloc( 10 * sizeof(int) );
    for (i = 0; i < 10; i++)  {
        buffer[i] = i;
        }
    for (i = 0; i < 10; i++) {
        printf("p[%d] is %d\n", i, buffer[i]);
        }
    
    free(buffer);


// example 9

char *s1;
char s2[80];
char *s3;
s1 = "Hello";
s3 = malloc(80);
printf("Enter your first name:\n");
fgets(s2, 80, stdin);
printf("Enter your last name:\n");
fgets(s3, 80, stdin);
printf("%s %s %s\n", s1, s2, s3);
free(s3);

}