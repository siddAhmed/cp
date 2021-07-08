// Write a program to swap two numbers wihtout using third variable

int main()
{
    int a, b; // 5 10
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    a = a + b; // a = 5 + 10 => 15
    b = a - b; // b = 15 - 10 => 5
    a = a - b;
    printf("a = %d \nb = %d\n", a, b);
}