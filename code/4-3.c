#include <stdio.h>

int main() {
    int a, i;
    int prime;

    scnaf("%d", &a);

    if (a < 2) {
        prime = 0;
    }
    for(i = 2; i < a; i++) {
        if (a % i == 0) {
            prime = 0;
            break;
        
        }
    }
    if(prime) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
