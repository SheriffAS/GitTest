#include <stdio.h>

int main()
{
    int m;

    printf("enter  m");
    scanf("%d", &m);


        if (m>12) {
            printf("error");
                }
        else {
            if (m<1){
                printf("error");
            }
            else {

                if (m<3) {
                    printf("winter");
                }
                else {

                    if (m<6) {
                        printf("spring");
                    }
                    else {

                        if (m<9) {
                            printf("summer");
                        }
                        else {
                            if (m<12) {
                                printf("autumn");
                            }
                            else {
                                printf("winter");
                            }
                        }
                    }
                }
            }

        }









}