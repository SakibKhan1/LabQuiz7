//Name: Sakib Khan
//Prof: Tong Yi
//This program returns the max of a, b, and c

#include<iostream>
using namespace std;

int max3(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }else if(b > a && b > c){
        return b;
    }else{
        return c;
    }
}
