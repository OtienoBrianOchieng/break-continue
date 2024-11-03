#include <stdio.h>

int main () {
    int sum = 0;

    for (int i =1; i <= 34; i++) {

        sum = sum + i;
        if (sum%2 != 0) {            
            continue;
            }
        
        if (sum >= 34) {
            break;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}

