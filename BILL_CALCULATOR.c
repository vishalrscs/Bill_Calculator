

//BILL CALCULATOR 
#include <stdio.h>
#include <math.h>

int main(){

float item_price[50],item_total[50],tax,total;
int item_quantity[50],n;
float sub_total=0;
char item_name[50][50];


printf("\nEnter the total number of item: ");
scanf("%d",&n);

for(int i = 1; i <= n; i++) {
    printf("\nEnter name of the item(type without space) %d: ",i);
    scanf("%s",item_name[i]);
    printf("\nEnter price of item %d: ", i);
    scanf("%f", &item_price[i]);

    printf("\nEnter quantity of item %d: ", i);
    scanf("%d", &item_quantity[i]);
    item_total[i]=item_price[i] * item_quantity[i];
    sub_total += item_total[i];

}

//tax_GST

tax=sub_total * 0.18;

//total 

total=sub_total + tax;

printf("------------------------\n");
printf("          BILL          \n");
printf("------------------------\n");
printf("Item\tPrice\tQty\tTotal\n");
for(int i=1;i<=n;i++){
    printf("%s\t%.2f\t%d\t%.2f\n", 
        item_name[i], 
        item_price[i],
         item_quantity[i], 
         item_total[i]);

}
printf("------------------------\n");
printf("SUB_TOTAL: %.2f\n",sub_total);
printf("GST(18 percent) : %.2f\n",tax);
printf("------------------------\n");
printf("\nTOTAL    : %.2f",total);
printf("\n------------------------");

return 0;


}














