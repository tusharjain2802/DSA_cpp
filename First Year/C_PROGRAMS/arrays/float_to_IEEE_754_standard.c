// 1 bit sign positive means 0 and negative means 1
// 8 bits is for exponents : exponent bias + power
// 23 bits for mantissa 
// total 32 bits
// step 1: convert the number into binary
// step 2: c0nvert binary into scientific notation.
// implement IEEE 754 standard. 
// Example: 3066.25 = 101111111010.01 in binary
//1.0111111101001 X 2exp(11)
// sin bit =0
// exp bias 2exp(k-1)-1   ; k=8 (bits)
// power=11
// this implies [2exp(7)-1]+11=138 ; 2exp(7)=128 =10000000(in binary)
//138=10001010 (8 bits expo part)
//mantisa is decimal part in scientific notation binary number (extra zeroes are added ar the end to make it 23 bits.
//mantisa =0111111101001 0000000000
#include<stdio.h>
#include<math.h>

float check_sign(float);
int convert_binary();

int main()
{
    float dec;
    printf("enter the decimal value you want to convert to ieee : ");
    scanf("%f",&dec);
    int a[8],i;
    int b[30];
    //check sign bit 
    int sign = check_sign(dec);
    
    //convert whole number part to binary 
    int modulus=fabs(dec);
    //convert to 8 bit binary 
    {    
        for(i=8;i>=0;i--)
        {
            int rem = modulus%2;
            a[i]=rem;
            modulus/=2;
        }

    }
    //convert fractional part to binary
    int whole_part=fabs(dec);
    float frac_part=(fabs(dec)-whole_part);
    //coverting now 
    {
       
        for(i=0;i<30;i++)
        {
            int multi=frac_part*2;
            b[i]=multi;
            whole_part=fabs(frac_part*2);
            frac_part=(frac_part*2)-whole_part;
        }
    }
    
    
    //merging the two arrays now 
    int number[38];
    for(i=0;i<8;i++)
    {
        number[i]=a[i];
    }
    for(i=0;i<30;i++)
    {
        number[i+8]=b[i];
    }
        
        
    //check exponent
    //find first occurencce of 1
    int loc;
    int value,c;
    for (c = 0; c < 38; c++)
    {
        if (number[c] == 1)
        {
          value=c;
          loc =8-c;
            break;
        }
    }
    //exponent with bias 
    int exponent= loc+127;
    int final1[8];
    //convert exponent to binary 
    for(i=7;i>=0;i--)
        {
            int rem = exponent%2;
            final1[i]=rem;
            exponent/=2;
        }
    for (c = 0; c < 8; c++)
                printf("%d ", final1[c]);
        printf(" | ");
    
    
    //check mantissa
    for (c = (value+1); c < 24; c++)
                printf("%d ", number[c]);
    
}


//check sign
float check_sign(float dec)
{
    int sign;
    if (dec>=0)  printf("0 | ");
    else         printf("1 | ");
}
