//vigenere cipher E
//***********************
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char p[100];
    char k[100];
    char nk[100];
    printf("Enter Text To Encrypt: ");
    gets(p);
    printf("Enter Key: ");
    gets(k);

    int plen = strlen(p);
    int klen = strlen(k);
    int i,j;
    for(i=0,j=0;i<plen;i++,j++){
        if(j==klen){
            j = 0;
        }
        nk[i] = k[j];
    }
    nk[i] = '\0';
    char c[100];
    for(i = 0;i<plen;i++){
        c[i] = ((p[i] + nk[i])%26) + 'A';
    }
    c[i] = '\0';
    printf("New Key: %s\n",&nk);
    printf("Encrypted Message: %s",&c);
}

//vigenere D
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char c[100];
    char k[100];
    char nk[100];
    printf("Enter Text To Decrypt: ");
    gets(c);
    printf("Enter Key: ");
    gets(k);

    int clen = strlen(c);
    int klen = strlen(k);
    int i,j;
    for(i=0,j=0;i<clen;i++,j++){
        if(j==klen){
            j = 0;
        }
        nk[i] = k[j];
    }
    nk[i] = '\0';
    char p[100];
    for(i = 0;i<clen;i++){
        p[i] = ((c[i] - nk[i] + 26)%26) + 'A';
    }
    p[i] = '\0';
    printf("New Key: %s\n",&nk);
    printf("Decrypted Message: %s",&p);
}
