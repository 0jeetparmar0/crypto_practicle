// MonoAlpha Encryption
//***********************************************
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
char pt[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char ct[26]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};

char p[100];
printf("Enter Encrypted Message: ");
gets(p);
char c[100] = {};
int flag = 0;
for(int i = 0;i<strlen(p);i++){
    if(p[i]<='A'||p[i]>='Z'){
        flag = 1;
        break;
    }
}
if(flag == 0){
    for(int i = 0;i<strlen(p);i++){
        for(int j = 0;j<26;j++){
            if(pt[j]==p[i]){
                c[i]=ct[j];
            }
        }
    }
    printf("Encrypted Message: %s",c);
}
else{
    printf("Message can't be Encrypted.");
}

return 0;
}

//Monoalpha Decryption
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
char pt[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char ct[26]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};

char c[100];
printf("Enter Encrypted Message: ");
gets(c);
char p[100] = {};
int flag = 0;
for(int i = 0;i<strlen(c);i++){
    if(c[i]<='A'||c[i]>='Z'){
        flag = 1;
        break;
    }
}
if(flag == 0){
    for(int i = 0;i<strlen(c);i++){
        for(int j = 0;j<26;j++){
            if(ct[j]==c[i]){
                p[i]=pt[j];
            }
        }
    }
    printf("Decrypted Message: %s",p);
}
else{
    printf("Message can't be decrypted.");
}

return 0;
}
