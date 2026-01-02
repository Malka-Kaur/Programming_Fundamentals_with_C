#include <stdio.h>

int main() {
    int attendance, present_count = 0;
    
    printf("--- Attendance Tracker (1 for Present, 0 for Absent) ---\n");
    for(int i = 1; i <= 30; i++) {
        printf("Day %d attendance: ", i);
        scanf("%d", &attendance);
        
        if(attendance == 1) {
            present_count++;
        }
    }
    
    printf("\nTotal days present: %d\n", present_count);
    printf("Total days absent: %d\n", 30 - present_count);
    return 0;
}