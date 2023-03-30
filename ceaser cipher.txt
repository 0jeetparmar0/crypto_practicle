// Caesar Cipher Encryption
//******************************
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char str[100];
    int key,flag=0;

    printf("Enter A Message to Encrypt: ");
    gets(str);
    printf("Enter The Key: ");
    scanf("%d",&key);

    for(int i = 0;str[i]!='\0';i++){
        if(isalnum(str[i])){
            flag = 0;
        }
        else{
            flag = 1;
            break;
        }
    }
    if (flag==0){
        for(int i = 0;str[i]!='\0';i++){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i] = (str[i] - 'A' + key)%26 +'A';
            }
            else if(str[i]>='a'&&str[i]<='z'){
                str[i] = (str[i] - 'a' + key)%26 +'a';
            }
            else{
                str[i] = (str[i] - '0' + key)%10 +'0';
            }
        }
        printf("Encrypted Message: %s",str);
    }
    else{
        printf("String Cannot be Encrypted");
    }
}

// Caesar Cipher Decryption
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char str[100];
    int key,flag=0;

    printf("Enter A Message to Decrypt: ");
    gets(str);
    printf("Enter The Key: ");
    scanf("%d",&key);
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i] = (str[i] - 'A' - key+26)%26 +'A';
        }
        else if(str[i]>='a'&&str[i]<='z'){
            str[i] = (str[i] - 'a' - key+26)%26 +'a';
        }
        else{
            str[i] = (str[i] - '0' - key+10)%10 +'0';
        }
    }
    printf("Decrypted Message: %s",str);
}
