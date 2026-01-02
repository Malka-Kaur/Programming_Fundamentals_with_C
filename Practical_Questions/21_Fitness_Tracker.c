#include <stdio.h>

int main() {
    float km, total_km = 0;
    
    printf("--- Monthly Fitness Tracker ---\n");
    for(int i = 1; i <= 30; i++) {
        printf("Day %d distance (km): ", i);
        scanf("%f", &km);
        total_km += km;
    }
    
    printf("\nTotal distance walked this month: %.2f km\n", total_km);
    return 0;
}