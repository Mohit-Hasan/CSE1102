#include <stdio.h>

struct product{ int id, price; };

int main() {
    int i,j,len=5;
    struct product pro[len];
    
    printf("=== Start Input ===\n");
    for(i=0; i<len; i++){
        printf("Product-%d ID and Price: ",i);
        scanf("%d %d",&pro[i].id, &pro[i].price);
        // printf("Product %d Price: ",i);
        // scanf("%d",&pro[i].price);
    }
    printf("=== After Input ===\n");
    for(i=0; i<len; i++){
        printf("ID: %d, Price: %d\n",pro[i].id,pro[i].price);
    }
    
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
           if(pro[i].price<pro[j].price){
               struct product temp = pro[i];
               pro[i] = pro[j];
               pro[j] = temp;
           }
        }
    }
    
    printf("=== After Low to High Sorting ===\n");
    for(i=0; i<len; i++){
        printf("ID: %d, Price: %d\n",pro[i].id,pro[i].price);
    }
}
