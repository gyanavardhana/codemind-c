#include<stdio.h>
int main(){
    int n,i,a[23],j=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d ",&a[i]);
        if (a[i]%2!=0){
            j++;
            
            
            
        }
    }
    if(j<3){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
