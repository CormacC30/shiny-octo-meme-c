#include <stdio.h>

int main(){
    
    // first example
    unsigned char c;
    c = 255;
    c += 2;
    printf("New value of c is %d \n", c);

    // second example

    int i;
    short s;

    i = 32769;
    s = i;

    printf("the new value of s is: %d \n", s);

    // third example

    int j;
    float f; // use double!
    j = 1234567890;
    f = j;

    printf("the new value of f is: %f \n", f);

    // fourth example
    // causes "core dump" divide by zero
    int l = 1;
    int m = 0;
    int n;
    n = l/m;
    printf("the new value of n is: %d \n", n);

    

}