#include <stdio.h>
#include <math.h>

void convert_from_decimal() {
    double num_f, bin_frac, frac_v = 0.1, bin_t;
    int num, bin = 0, rem = 0, pos = 1, result;
    
    printf("Enter number in decimal: ");
    scanf("%lf", &num_f);
    
    num = (int)num_f;
    while (num > 0) {
        rem = num % 2;
        num = num / 2;
        bin = bin + (rem * pos);
        pos = pos * 10;
    }
    
    while (num_f > 0.00000001) {
        int num_c = (int)floor(num_f);
        result = num_c * 2;
        bin_frac = bin_frac + (frac_v * result);
        num_f = num_f * 2 - result;
        frac_v /= 10;
    }
    
    bin_t = bin + bin_frac;
    printf("Binary number is %lf\n", bin_t);
}

int main() {
    convert_from_decimal();
    return 0;
}