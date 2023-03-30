//PlayFair Cipher
//***********************
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5][5]={{'M','O','N','A','R'},
                    {'C','H','Y','B','D'},
                    {'E','F','G','I','K'},
                    {'L','P','Q','S','T'},
                    {'U','V','W','X','Z'}};
    char pt[]="INSTRUMENT";
    int i,j,k=0,l=1,r1,r2,c1,c2;
    int len=strlen(pt);
    printf("\nCipher Text:");
   while(k<len)
   {
   for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==pt[k])
            {
             r1=i;
             c1=j;   
            }
            if(arr[i][j]==pt[l])
            {
             r2=i;
             c2=j;   
            }
        }
    }
           
           if(r1==r2)
            {
                if(c2==4)
                    printf("%c%c",arr[r1][c1+1],arr[r2][0]);
                else
                    printf("%c%c",arr[r1][c1+1],arr[r2][c2+1]);
            }
            if(c1==c2)
            {
                if(r2==4)
                    printf("%c%c",arr[r1+1][c1],arr[0][c2]);
                else
                    printf("%c%c",arr[r1+1][c1],arr[r2+1][c2]);
            }
            if(r1!=r2 && c1!=c2)
            {
                printf("%c%c",arr[r1][c2],arr[r2][c1]);
            }
            k=k+2;
            l=l+2;
   }
    return 0;
}

//Playfair D
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5][5]={{'M','O','N','A','R'},
                    {'C','H','Y','B','D'},
                    {'E','F','G','I','K'},
                    {'L','P','Q','S','T'},
                    {'U','V','W','X','Z'}};
    char ct[]="GATLMZCLRQ";
    int i,j,k=0,l=1,r1,r2,c1,c2;
    int len=strlen(ct);
    printf("\nPlain Text:");
   while(k<len)
   {
   for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==ct[k])
            {
             r1=i;
             c1=j;   
            }
            if(arr[i][j]==ct[l])
            {
             r2=i;
             c2=j;   
            }
        }
    }
           
           if(r1==r2)
            {
                if(c2==0)
                    printf("%c%c",arr[r1][c1-1],arr[r2][4]);
                else
                    printf("%c%c",arr[r1][c1-1],arr[r2][c2-1]);
            }
            if(c1==c2)
            {
                if(r2==0)
                    printf("%c%c",arr[r1-1][c1],arr[4][c2]);
                else
                    printf("%c%c",arr[r1-1][c1],arr[r2-1][c2]);
            }
            if(r1!=r2 && c1!=c2)
            {
                printf("%c%c",arr[r1][c2],arr[r2][c1]);
            }
            k=k+2;
            l=l+2;
   }
    return 0;
}
