#include<stdio.h>
int main()
{
    char colorcode;
    scanf("%c",&colorcode);
    switch(colorcode)
    {
        case 'V':
        printf("Violet");
        break;
        case 'I':
        printf("Indigo");
        break;
        case 'B':
        printf("Blue");
        break;
        case 'G':
        printf("Green");
        break;
        case 'Y':
        printf("Yellow");
        break;
        case 'O':
        printf("Orange");
        break;
        case 'R':
        printf("Red");
        break;
        default:
            printf("-1");
            break;
    }
    
}