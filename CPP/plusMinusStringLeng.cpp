#include <iostream>

int main() {
    
    int i,n,plus=0,minus=0,tempPlus=0,tempMinus=0;;
    scanf("%d\n",&n);
    char A[n];

    for(i=0; i<n; i++) scanf("%c",&A[i]);
    
    for(i=0; i<n; i++){
        //count as per '+' or '-'
        if(A[i]== '+'){
            tempMinus=0;
            tempPlus++;
            if(tempPlus>plus) plus=tempPlus;
        }else{
            tempPlus=0;
            tempMinus++;
            if(tempMinus>minus) minus=tempMinus;
        }
    }
    
    if(plus>minus)printf("%d",plus);
    else printf("%d",minus);
}
