/*#include <stdio.h>

int main() {
    unsigned long long int num;
    printf("Enter the number: ");
    scanf("%llu", &num);
    printf("\nbitcount: %d\n", num > 0 ? (int)sizeof(num) * 8 - __builtin_clzll(num) : 0);
    return 0;
}
*/
#include <stdio.h>

int main() {
    unsigned long long int num;
    printf("Enter the number: ");
    scanf("%lld", &num);
    printf("\nbitcount: %d\n", printf("%llu", num));
    return 0;
}

