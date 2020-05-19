#include <iostream>
#include <stdio.h>

void cc(void(*method)(char*),char* msg){
    method(msg);
}

void test(char* g){
    printf("%s",g);
}

union My{
    int my1;
    int my2;
    int my3;
};

int main() {
    void(*test01)(char*) = test;
    cc(test01,"ºÇºÇºÇßÕ");

    My my;
    my.my1 = 4;


    return 0;
}




