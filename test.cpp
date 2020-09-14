/*************************************************************************
	> File Name: test.cpp
	> Author:chenjianliang 
	> Mail:cjianliang@163.com
	> Created Time: Mon Sep 14 19:58:52 2020
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;
int swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    printf("%d\n", a + b);
    swap(a,b);
    cout << a << " " << b << endl;
    return 0; 
}

