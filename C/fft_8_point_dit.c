#include <stdio.h>
#include <math.h>

// Values of omega ---> global variable (as it needed to all funtion)
float wr[4] = {1, 0.707, 0, -0.707};   // real part of omega
float wi[4] = {0, -0.707, -1, -0.707}; // imginary part of omega

//struct for storing real and imginary part of complex number
typedef struct Complex
{
    float re;       //real part
    float im;       //imginary part
} Complex;

//storing 4 womega values in array w
Complex w[4] = {
    {.re = 1, .im = 0}, 
    {.re = 0.707, .im = -0.707}, 
    {.re = 0, .im = -1}, 
    {.re = -0.707, .im = -0.707}};

//this funtion is for printing array of complex numbers
void print_arr( Complex arr[])
{
    
    for (int i = 0; i < 8; i++)
    {
        if (arr[i].im < 0)
        {
            // float value = -(arr[i].im);
            printf("X(%d) ==> %f - %f i\n", i,arr[i].re, -arr[i].im);
        }
        else if (arr[i].im != 0)
        {
            printf("X(%d) ==> %f + %f i\n",i, arr[i].re, arr[i].im);
        }
        else
        {
            printf("X(%d) ==> %f\n", i,arr[i].re);
        }
    }
}

//complex numbers multiplication
Complex complex_multiplication(Complex c1, Complex c2)
{
    Complex c3;
    c3.re= c1.re * c2.re - c1.im * c2.im;
    c3.im= c1.im * c1.re + c1.re * c2.im;
    return c3;
}

//stage 1---> storing output in output_arr
void stage_1(Complex input_arr[],  Complex *output_arr)
{
    output_arr[0] = (Complex){ .re= input_arr[0].re +  input_arr[4].re, .im=input_arr[0].im +  input_arr[4].im };
    output_arr[1] = (Complex){ .re= input_arr[1].re +  input_arr[5].re, .im=input_arr[1].im +  input_arr[5].im };
    output_arr[2] = (Complex){ .re= input_arr[2].re +  input_arr[6].re, .im=input_arr[2].im +  input_arr[6].im };
    output_arr[3] = (Complex){ .re= input_arr[3].re +  input_arr[7].re, .im=input_arr[3].im +  input_arr[7].im };
    output_arr[4] = (Complex){ .re= input_arr[0].re -  input_arr[4].re, .im=input_arr[0].im -  input_arr[4].im };
    output_arr[4] = (Complex)complex_multiplication(output_arr[4],w[0]);
    output_arr[5] = (Complex){ .re= input_arr[1].re -  input_arr[5].re, .im=input_arr[1].im -  input_arr[5].im };
    output_arr[5] = (Complex)complex_multiplication(output_arr[5],w[1]);
    output_arr[6] = (Complex){ .re= input_arr[2].re -  input_arr[6].re, .im=input_arr[2].im -  input_arr[6].im };
    output_arr[6] = (Complex)complex_multiplication(output_arr[6],w[2]);
    output_arr[7] = (Complex){ .re= input_arr[3].re -  input_arr[7].re, .im=input_arr[3].im -  input_arr[7].im };
    output_arr[7] = (Complex)complex_multiplication(output_arr[7],w[3]);   
}

//stage 2---> storing output in output_arr
void stage_2(Complex input_arr[],Complex *output_arr){
    output_arr[0] = (Complex){ .re= input_arr[0].re +  input_arr[2].re, .im=input_arr[0].im +  input_arr[2].im };
    output_arr[1] = (Complex){ .re= input_arr[1].re +  input_arr[3].re, .im=input_arr[1].im +  input_arr[3].im };
    output_arr[2] = (Complex){ .re= input_arr[0].re -  input_arr[2].re, .im=input_arr[0].im -  input_arr[2].im };
    output_arr[2] = (Complex)complex_multiplication(output_arr[2],w[0]);   
    output_arr[3] = (Complex){ .re= input_arr[1].re -  input_arr[3].re, .im=input_arr[1].im -  input_arr[3].im };
    output_arr[3] = (Complex)complex_multiplication(output_arr[3],w[2]);   
    output_arr[4] = (Complex){ .re= input_arr[4].re +  input_arr[6].re, .im=input_arr[4].im +  input_arr[6].im };
    output_arr[5] = (Complex){ .re= input_arr[5].re +  input_arr[7].re, .im=input_arr[5].im +  input_arr[7].im };
    output_arr[6] = (Complex){ .re= input_arr[4].re -  input_arr[6].re, .im=input_arr[4].im -  input_arr[6].im };
    // output_arr[6] = (Complex)complex_multiplication(output_arr[6],w[0]);
    output_arr[7] = (Complex){ .re= input_arr[5].re -  input_arr[7].re, .im=input_arr[5].im -  input_arr[7].im };
    output_arr[7] = (Complex)complex_multiplication(output_arr[7],w[2]);   
}

//stage 3---> storing output in output_arr
void stage_3(Complex input_arr[],Complex *output_arr){
    printf("%f,%f",input_arr[0].re,input_arr[1].re);
    output_arr[0] = (Complex){ .re= input_arr[0].re +  input_arr[1].re, .im=input_arr[0].im +  input_arr[1].im };
    output_arr[1] = (Complex){ .re= input_arr[0].re -  input_arr[1].re, .im=input_arr[0].im -  input_arr[1].im };
    output_arr[2] = (Complex){ .re= input_arr[2].re +  input_arr[3].re, .im=input_arr[2].im +  input_arr[3].im };
    output_arr[3] = (Complex){ .re= input_arr[2].re -  input_arr[3].re, .im=input_arr[2].im -  input_arr[3].im };
    output_arr[4] = (Complex){ .re= input_arr[4].re +  input_arr[5].re, .im=input_arr[4].im +  input_arr[5].im };
    output_arr[5] = (Complex){ .re= input_arr[4].re -  input_arr[5].re, .im=input_arr[4].im -  input_arr[5].im };
    output_arr[6] = (Complex){ .re= input_arr[6].re +  input_arr[7].re, .im=input_arr[6].im +  input_arr[7].im };
    output_arr[7] = (Complex){ .re= input_arr[6].re -  input_arr[7].re, .im=input_arr[6].im -  input_arr[7].im };
}


int main()
{
    Complex arr[8];

    // Taking input of 8 complex number (input==> real part and imginary part are seperated by space) 
    printf("Please Enter Complex numbers\n");
    for (int i = 0; i < 8; i++)
    {
        Complex c;
        scanf("%f %f",&c.re,&c.im);
        arr[i]=c;
    }

    // //This is as fixed input if we don't want to Enter input again and again
    // arr[0]=(Complex){.re=1,.im=0};
    // arr[1]=(Complex){.re=2,.im=0};
    // arr[2]=(Complex){.re=3,.im=0};
    // arr[3]=(Complex){.re=4,.im=0};
    // arr[4]=(Complex){.re=5,.im=0};
    // arr[5]=(Complex){.re=6,.im=0};
    // arr[6]=(Complex){.re=7,.im=0};
    // arr[7]=(Complex){.re=8,.im=0};

    // stage 1 working
    Complex out1[8];
    stage_1(arr, out1);
    printf("\nfirst stage :- \n");
    // print_arr(out1);

    // stage 2 working
    Complex out2[8];
    stage_2(out1, out2);
    printf("\nSecond stage :- \n");
    // print_arr(out2);

    // stage 3 working
    Complex out3[8];
    stage_3(out2, out3);
    printf("\nThird stage :-\n");
    print_arr(out3);
    return 0;
}

