#define B 0
#define C 1
#define J 2
#define CONVERT(arg) #arg

void main()
{
    int data[2][3] = {0};
    data[0][B] = 3;
    printf("%c:%d\n", CONVERT(B), data[0][B]);
}