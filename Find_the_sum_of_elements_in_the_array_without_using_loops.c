#include<stdio.h>
int main(){
    int i,a[89],n,s=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("%d",s);
    return 0;
}