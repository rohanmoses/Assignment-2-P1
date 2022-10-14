#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;

complex read1()
{
    complex n1, temp;
   
   
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    temp.real = n1.real;
    temp.imag = n1.imag;
    return (temp);
   
   
}

complex read2()
{
    complex n2, temp;
   
   
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);
    temp.real = n2.real;
    temp.imag = n2.imag;
    return (temp);
   
   
}
complex print(complex input1, complex input2)
{
    printf("\nFirst complex number is %.1f + %.1fi\n", input1.real, input1.imag);
    printf("Second complex number is %.1f + %.1fi\n", input2.real, input2.imag);
}

complex add(complex input1, complex input2) {
    complex temp;
    temp.real = input1.real + input2.real;
    temp.imag = input1.imag + input2.imag;
    return (temp);
}

int main() {
   
    complex n1, n2, result, input1, input2;
    printf("For 1st complex number \n");
    input1 = read1();
   
    printf("For 2nd complex number \n");
    input2 = read2();
   
    print(input1, input2);
   
    result = add(input1, input2);

    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}