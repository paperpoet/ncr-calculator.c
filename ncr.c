#include<stdio.h>
int main(){
    //nCr = n! / {r! * (n-r)!}
    int n,r;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Enter R: ");
    scanf("%d",&r);
    long long int nfact=1;//n!
    long long int rfact=1;//r!
    long long int nminusrfact=1;//(n-r)!
    if(n>=r && n>=0 && r>=0){
        for(int i=1;i<=n;i++){
            nfact = nfact*i;
        }
        for(int i=1;i<=r;i++){
            rfact = rfact*i;
        }
        for(int i=1;i<=n-r;i++){
            nminusrfact = nminusrfact*i;
        }
        long long int nCr = nfact/(rfact*nminusrfact);
        printf("%d! = %lld",n,nfact);
        printf("\n%d! = %lld",r,rfact);
        printf("\n(%d - %d)! = %lld",n,r,nminusrfact);
        printf("\n%dC%d = %lld",n,r,nCr);
    }
    else {
        printf("Math Error!!");
    }

}