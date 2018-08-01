#include <stdio.h>

int n;
int k;
int A[100000];

int b(int m){
int i,s,x;
 s = 0;
 x = 1;
 for(i=0;i<n;i++){
    if(A[i]>m)return 0;
    if(s + A[i]<= m)s = s +A[i];
        else {
        x++;
        s=A[i];
        }
 }
    return x <= k;
    }











int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }


    lb = 0 ;
    ub = 1000000000 ;
    while (ub - lb > 1){
        int m = (ub + lb)/2;
        if (b(m)){
            ub = m ;
        }
        else{
            lb = m ;
        }
    }
    
    printf("%d\n",ub) ;
    return 0;
}
