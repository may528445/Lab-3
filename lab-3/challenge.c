#include <stdio.h>

int main() {
    float cal, phy, compro;
    char g1, g2, g3;
    float n1, n2, n3;

    printf("Calculus score: ");
    scanf("%f", &cal);
    printf("Physic score: ");
    scanf("%f", &phy);
    printf("compro score: ");
    scanf("%f", &compro);

    // Cal grade
    if (cal >= 90) {
        g1 = 'A'; n1 = 4.0;
    } else if (cal >= 80) {
        g1 = 'B'; n1 = 3.0;
    } else if (cal >= 70) {
        g1 = 'C'; n1 = 2.0;
    } else if (cal >= 60) {
        g1 = 'D'; n1 = 1.0;
    } else {
        g1 = 'F'; n1 = 0.0;
    }

    // Phy grade
    if (phy >= 90) {
        g2 = 'A'; n2 = 4.0;
    } else if (phy >= 80) {
        g2 = 'B'; n2 = 3.0;
    } else if (phy >= 70) {
        g2 = 'C'; n2 = 2.0;
    } else if (phy >= 60) {
        g2 = 'D'; n2 = 1.0;
    } else {
        g2 = 'F'; n2 = 0.0;
    }

    // Compro grade
    if (compro >= 90) {
        g3 = 'A'; n3 = 4.0;
    } else if (compro >= 80) {
        g3 = 'B'; n3 = 3.0;
    } else if (compro >= 70) {
        g3 = 'C'; n3 = 2.0;
    } else if (compro >= 60) {
        g3 = 'D'; n3 = 1.0;
    } else {
        g3 = 'F'; n3 = 0.0;
    }

    printf("\nSubject  Score  Grade  Grade\n");
    printf("-----------------------------\n");
    printf("Cal      %.0f     %c      %.1f\n", cal, g1, n1);
    printf("Physics  %.0f     %c      %.1f\n", phy, g2, n2);
    printf("compro   %.0f     %c      %.1f\n", compro, g3, n3);

    float GPA = (n1 + n2 + n3) / 3.0;
    printf("\nGPA: %.1f\n", GPA);

    return 0;
}
