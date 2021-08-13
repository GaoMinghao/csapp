#include <stdio.h>

void P2_12() {
//    Question2
    u_int32_t x= 0x87654321;
    u_int32_t temp_21 = x & 0x000000FF;
    u_int32_t temp_high_6_not = ~x;
    u_int32_t temp_high_6 = temp_high_6_not & 0xFFFFFF00;
    printf("0x%.2x",temp_high_6 + temp_21);
    printf("\n");
//    Question3
    u_int32_t t = 0x000000FF;
    printf("0x%.2x", t | x);
}
int main() {
    P2_12();
    return 0;
}
