#include<stdio.h>
void display(int ino)
{
    if(ino>10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int i =0;
    printf("Enter a number : ");
    scanf("%d",&i);
    display(i);
    return 0;
}