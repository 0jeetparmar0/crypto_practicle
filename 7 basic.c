//C Basics 1 to 7
//***************************************************
#include<stdio.h>
#include<conio.h>

int main(){
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int val;
    printf("Enter Number to Check: ");
    scanf("%d",&val);
    int l = 0;
    int u = 9;
    while(l<=u){
        int m = (l+u)/2;
        if(val==a[m]){
            printf("%d",m+1);
            break;
        }
        else if(val>a[m]){
            l = m+1;
        }
        else if(val<a[m]){
            u = m-1;
        }
    }
    if(l>u){
        printf("Not Found");
    }
}

//*****************************
#include<stdio.h>
#include<conio.h>

int main(){
    int a[7] = {50,60,10,12,69,41};
    int val;
    int i = 0;
    printf("Enter Number to Check: ");
    scanf("%d",&val);
    for(i = 0;i<7;i++){
        if(val==a[i]){
            printf("%d",i+1);
            break;
        }
    }
    if(i==7){
        printf("Not Found");
    }
}

//*****************************
#include<stdio.h>
#include<conio.h>

int main(){
    char a[100];
    printf("Enter String: ");
    gets(a);
    int x = 0;
    for(int i = 0;a[i]!='\0';i++){
        x++;
    }
    printf("%d",x);

    return 0;
}

//*****************************
#include<stdio.h>
#include<conio.h>

int main(){
    printf("%d \n",13%2);
    printf("%d \n",'A'%3);
    printf("%d \n",'a'%4);
    printf("%d \n",'2'%2);
}


//*****************************
#include<stdio.h>
#include<conio.h>

int main(){
    char a[30];
    printf("Enter Name: ");
    gets(a);
    printf("Good Afternoon %s",a);
}


//*****************************
#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("UpperCase Letter");
    }
    else if(ch>='a'&&ch<='z'){
        printf("LowerCase Letter");
    }
    else if(ch>='0'&&ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}

//*****************************
#include<stdio.h>
#include<conio.h>

int main(){
    for(int i = 'A';i<='Z';i++){
        printf("%d \n",i);
    }
}
