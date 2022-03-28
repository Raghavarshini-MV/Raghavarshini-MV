#include <stdio.h>

int main()
{
    int choice, Burger, French, Pizza, Sandwiches, Pasta;
    printf("1.Burger\n2.French Fries\n3.Pizza\n4.Sandwiches\n");
    printf("Please select your choice from 1,2,3,4\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Food item: Burger.\n");
        printf("Price: 129");
        break;
    case 2:
        printf("Food item: French Fries.\n");
        printf("Price: 99");
        break;
    case 3:
        printf("Food item: Pizza.\n");
        printf("Price: 239");
        break;
    case 4:
        printf("Food item: Sandwich.\n");
        printf("Price: 149");
        break;
    case 5:
        printf("Food item: Pasta.\n");
        printf("Price: 179");
        break;
        
    default:
        printf("Invalid choice");
        break;
    }
}
