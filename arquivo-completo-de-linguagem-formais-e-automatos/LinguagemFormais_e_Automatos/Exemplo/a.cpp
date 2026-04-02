//
// Created by Robert L Resende on 09/07/25.
//
#include <cstdio>
#include "cstring"
#include "cstdbool"

bool isDigit(char c){

    return(c >= '0' && c <= '9');
}

bool matcha_a_star(const char *str){
    int i = 0;
    while(str[i] == 'a'){
        i++;
    }
    if(str[i] == 'b'){
        i++;
        return str[i] == '\0';
    }
    return false;
}

int main(){

//    char str1[] = 'aaab';
//
//
//
//
}