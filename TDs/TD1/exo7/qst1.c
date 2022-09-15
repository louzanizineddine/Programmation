#include<stdio.h>

int main(void) {

    int user_age = 0;

    printf("type your age to show the category \n");
    while (user_age < 5)
    {
        scanf("%d" , &user_age);
        if (user_age  < 5)
        {
            printf("too young to join the club\n");
        }
        
    }
    
    printf("your age is %d \n" , user_age);

    switch(user_age) {
        case 5:
        case 6:
            printf("poussin\n");
            break;
        case 7:
        case 8:
            printf("diablotin\n");
            break;
        case 9:
        case 10:
            printf("preminime\n");
            break;
        case 11:
        case 12:
            printf("minime\n");
            break;
        case 13:
        case 14:
            printf("cadet\n");
            break;
        case 15:
        case 16:
            printf("scolaire\n");
            break;
        case 17:
        case 18:
            printf("espoir\n");
        default:
            printf("senior\n");
            break;                
    }
    return 0;
}