#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int daduM;
    int daduN;

    printf ("Masukkan Dadu Pak Dengklek = ");
    scanf ( "%i", &daduM );

    printf ("Masukkan Dadu Bu Dengklek = ");
    scanf ( "%i", &daduN );

    if (&daduM > &daduN){
        printf ("Pak Dengklek");
    }
    else if (&daduM < &daduN){
        printf ("Bu Dengklek");
    }
    else if (&daduM == &daduN ){
        printf ("Seri");
    }
    else {
        printf("Tolong masukkan nilai yang benar!");
    }
    return 0;
}


