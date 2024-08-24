//Write a C program to input any alphabet and check whether it is vowel or consonant.
//Write a C program to check whether a charac[ter is alphabet or not.
// Write a C program to input any character and check whether it is alphabet, digit or special character.
// Write a C program to check whether a character is uppercase or lowercase alphabet.



#include<stdio.h>
int main(){
    char ch;
    printf("input any charcter");
    scanf("%c",&ch);
    // if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z'){
    //     printf("it is a alphabet");
    // }
    // else{
    //     printf("it is not alphabet");
    // }
    // if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    //     printf("vowels");
    // }
    // else if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z'){
    //     printf("consonent");
    // }
    // else{
    //     printf("not a alphabet");
    // }
    // if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z'){
    //     printf("it is a alphabet");

    // }
    // else if(ch>='0'&& ch<='9'){
    //     printf("digit");
    // }
    // else printf("special chracter");
    if(ch>='A'&& ch<='Z'){
        printf("uppercase");
    }
    else if(ch>='a'&& ch<='z'){
        printf("lowercase");
    }
    else{
        printf("not a alhphabet");
    }
}