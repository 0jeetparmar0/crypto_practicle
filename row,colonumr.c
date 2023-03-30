// Row/Columnar Cipher
//************************************
#include<stdio.h>
#include<string.h>

int main(){
    char plain[100],key[100];
    printf("Enter String: ");
    gets(plain);
    printf("Enter Key: ");
    gets(key);
    int len = strlen(plain);
    int col = strlen(key);
    int row = len/col;

    int matrix[row][col];

    int k = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            matrix[i][j]=plain[k++];
        }
    }
    k = 0;

    char cipher[100];
    for(int i = 0;i<col;i++){
        int c = (int)(key[i]);
        c = c-48;
        c--;
        for(int j = 0;j<row;j++){
            cipher[k++]=matrix[j][c];
        }
    }
    cipher[k]='\0';
    printf("Cipher: %s",&cipher);
}

//Row D
#include<stdio.h>
#include<string.h>

int main(){
    char cipher[100],key[100];
    printf("Enter String: ");
    gets(cipher);
    printf("Enter Key: ");
    gets(key);
    int len = strlen(cipher);
    int col = strlen(key);
    int row = len/col;

    int matrix[row][col];
    int k = 0;

    for(int i = 0;i<col;i++){
        int c = (int)(key[i]);
        c = c-48;
        c--;
        for(int j = 0;j<row;j++){
            matrix[j][c]=cipher[k++];
        }
    }

    char plain[100];
    k = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            plain[k++]=matrix[i][j];
        }
    }
    plain[k]='\0';
    printf("Cipher: %s",plain);
}
