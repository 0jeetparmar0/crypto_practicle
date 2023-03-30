//Vernam E
//************
#include<stdio.h>
#include<string.h>

int main(){
    char ptext[100],key[100];

    printf("Enter A String: ");
    gets(ptext);

    int plen = strlen(ptext);
    int klen = plen;

    do{
        if(plen!=klen){
            printf("Invalid Key Length\n");
        }
        printf("Enter Key: ");
        gets(key);
        klen = strlen(key);
    }while(klen != plen);
    int p,k,i;
    char cipher[100];
    for(i = 0;i<plen;i++){
        p=ptext[i]%65;
        k=key[i]%65;
        cipher[i] = ((p+k)%26)+'A';
    }
    cipher[i] = '\0';
    printf("Cipher Text: %s",cipher);
}

//Vernam D
#include<stdio.h>
#include<string.h>

int main(){
    char ctext[100],key[100];

    printf("Enter A String: ");
    gets(ctext);

    int clen = strlen(ctext);
    int klen = clen;

    do{
        if(clen!=klen){
            printf("Invalid Key Length\n");
        }
        printf("Enter Key: ");
        gets(key);
        klen = strlen(key);
    }while(klen != clen);
    int c,k,i;
    char plain[100];
    for(i = 0;i<clen;i++){
        c=ctext[i]%65;
        k=key[i]%65;
        plain[i] = ((c-k+26)%26)+'A';
    }
    plain[i] = '\0';
    printf("Cipher Text: %s",plain);
}
