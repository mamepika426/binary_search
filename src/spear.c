#include <stdio.h>

int n;
int k;
int A[100000];

int sumup(int m){
    int i ; int x = 0; int a;
    for (i = 0 ; i < n; i++){
        a = A[i]/m ;
        x = a + x;
    }
    return x < k ;
}







int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    
    lb = 0 ;
    ub = 1000000001 ;
    while (ub - lb > 1){
        int m = (ub + lb)/2;
        if (sumup(m)){
            ub = m ;
        }
        else{
            lb = m ;
        }
    }
    
    printf("%d\n",lb) ;


  return 0;
}
