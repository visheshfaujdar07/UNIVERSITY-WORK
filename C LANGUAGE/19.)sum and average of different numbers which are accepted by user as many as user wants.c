#include <stdio.h>
int main(){
    float n,sum=0,num;
    float avg;
    printf("enter the number of terms you want to enter\n");
    scanf("%f",&n);
    for(float i = 1;i<=n;i=i+1){
        printf("enter your %.f number",i);
        scanf("%f",&num);
        sum=sum+num;
    }
    avg = (sum)/n;
    printf("sum is: %.f\n",sum);
    printf("average is: %.2f",avg);
    return 0 ;
}
