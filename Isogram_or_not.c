#include<stdio.h>
#include<string.h>
int main()
{
    int b=0;
    char ch[1000];
    scanf("%s",ch);
    for(int i=0;i<strlen(ch)-1;i++){
        for(int j=i+1;j<strlen(ch);j++){
            if(ch[i]==ch[j]){
                b=1;
                break;
            }
        }
    }
    if(b==0) printf("True");
    else printf("False");
}