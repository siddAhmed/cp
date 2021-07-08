// Write a program to swap two numbers


int main()
{
    int a, b, temp;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("b = %d \na = %d", b, a);
}