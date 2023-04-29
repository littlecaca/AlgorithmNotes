/*  划拳  */
#include <stdio.h>

int main()
{
    int n, a_claim, a_act, b_claim, b_act, a_drink = 0, b_drink = 0;

    printf("Please input the N:\n");
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d%d", &a_claim, &a_act, &b_claim, &b_act);
        
        if((a_act == a_claim + b_claim) && (b_act != a_claim + b_claim))
            b_drink++;
        else if((b_act == a_claim + b_claim) && (a_act != a_claim + b_claim))
            a_drink++;        
    }
    printf("%d %d", a_drink, b_drink);

    return 0;
}
 
