# include <stdio.h>
int main(){
    int D,sum=0;
    scanf("%d",&D);
    int A[D+1],B[D+1];
    for(int i=0; i<(D+1);i++){
        scanf("%d",&A[i]);
        scanf("%d",&B[i]);
    }
    for(int j =0;j<(D+1);j++){
        for(int k=0;k<(D+1);k++){
            sum+= A[j]*B[k];
        }
    }
    printf("%d",sum);
    return 0;
}