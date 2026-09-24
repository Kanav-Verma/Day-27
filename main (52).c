
#include <stdio.h>

int main() {
    int stars;

    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            stars = 1;
        } else if (i == 2 || i == 8) {
            stars = 3;
        } else if (i== 3 || i==7){
            stars = 5;
        }else if (i== 4 || i==6){
            stars = 7;
        }else {
            stars = 9;
        }

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        
            printf("\n");
        
    }

    return 0;
}