#include <stdio.h>

int main() {
    int x ;
    printf("enter your number (0-sunday;1-monday;2-tuesday...)");
    scanf("%d",&x);
    switch(x){
        case 0:
        printf("sunday\n");
        break;
        case 1:
        printf("monday\n");
        break;
        case 2 :
        printf("tuesday\n");
        break;
        case 3 :
        printf("wednesday\n");
        break;
        case 4 : 
        printf("thrusday\n");
        break;
        case 5 : 
        printf("friday\n");
        break;
        case 6 : 
        printf("satday\n");
        break;
        default:
        printf("invalid input\n");

    }

    return 0;
    
}
