#include <stdio.h>

int main() {
    int x = 5;
    int y = 5;
    int pre_increment_result;
    int post_increment_result;

    // Demonstrate pre-increment (++x)
    // x is incremented to 6 first, 
    //then the value 6 is assigned to pre_increment_result
    
    pre_increment_result = ++x; 

    // Demonstrate post-increment (y++)
    // The current value of y (5) is assigned to post_increment_result first, 
    // then y is incremented to 6
    
    post_increment_result = y++; 

    printf("Pre-increment (pre_increment_result = ++x):\\n");
    printf("  Result variable value: %d\\n", pre_increment_result);
    printf("  Original variable value (x): %d\\n\\n", x);

    printf("Post-increment (post_increment_result = y++):\\n");
    printf("  Result variable value: %d\\n", post_increment_result);
    printf("  Original variable value (y): %d\\n", y);

    return 0;
}