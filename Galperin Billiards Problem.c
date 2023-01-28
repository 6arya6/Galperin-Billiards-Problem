
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* SIGN CONVENTION */
/* - <--------> + */

double V1_after(double m1, double m2, double v1, double v2);
double V2_after(double m1, double m2, double v1, double v2);

int main(void) {
    int n;
    double m1; /* mass of big ball */
    double m2 = 1; /* mass of small ball */
    double d_i = 10; /* distance between big ball and wall */

    printf("MASS OF LARGE BALL IS 100^n kg:\nENTER VALUE OF n:\n");
    scanf("%d",&n);

    m1 = pow(100,n);

    double v1 = 10; /* vel of big ball */
    double v2 = 0; /* vel of small ball */
    int num_collisions = 0;

        /* collision with ball */
        double v_f_1 = V1_after(m1,m2,v1,v2);
        double v_f_2 = V2_after(m1,m2,v1,v2);
        v1 = v_f_1;
        v2 = v_f_2;
        num_collisions++;
        printf("%lf\n",v1);
        printf("%lf\n",v2);

    while (fabs(v1) < fabs(v2) || v1 > 0) { /*  */

        double d = d_i;
        printf("%lf", d);

        /* collision of small ball with with wall */
        v2 = -v2;
        num_collisions++;

        /* collison with ball again */
        double v_f_1 = V1_after(m1,m2,v1,v2);
        double v_f_2 = V2_after(m1,m2,v1,v2);
        v1 = v_f_1;
        v2 = v_f_2;
        printf("%lf\n",v1);
        printf("%lf\n",v2);
        num_collisions++;
    }

    if (v2 < 0) {
        num_collisions++;
        v2 = -v2;
    }

    printf("Number of collisions: %d\n", num_collisions);
    printf("Approximate PI value: %lf\n", num_collisions/pow(10,n));
    return 0;
}

double V1_after(double m1, double m2, double v1, double v2) {
    double v_after = (((m1 - m2) / (m1 + m2)) * (v1)) + (((2 * m2) / (m1 + m2)) * (v2));
    return v_after;
}

double V2_after(double m1, double m2, double v1, double v2) {
    double v_after = (((m2 - m1) / (m1 + m2)) * (v2)) + (((2.0 * m1) / (m1 + m2)) * (v1));
    return v_after;
}

