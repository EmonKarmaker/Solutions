#include<stdio.h>
#include<string.h>
int  main(){
 
char a[1001];
int l ,n;
scanf("%d", &n);
while(n--){
    scanf("%s",&a);
    l=strlen(a);
 
if (l<=10)
    printf("%s\n",a);
else
printf("%c%d%c\n",a[0],l-2,a[l-1]);
}
 
return 0;
 
 
 
 
}