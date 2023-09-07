#include <stdio.h>
#include<math.h>
#define exponent_bias 127;
int check_sign ();
int convert();
float convert_mantissa(); 
int main(){
int sign,exponent,i;
double mantissa; 
printf("enter sign bit- that is first digit \n");
scanf("%d", &sign);
sign=check_sign(sign);
printf("enter exponent- that is next 8 digits \n");
scanf("%d", &exponent);
//converting binary exponent to decimal
int dec1=convert(exponent);
printf("%d \n",dec1);
//subtracting exponent bias
exponent = dec1;
exponent-=exponent_bias;
printf("%d \n",exponent); 
//checking mantissa
float dec2=convert_mantissa();
//final result 
float result = sign*(1+dec2)*pow(2,exponent);
printf("result : %f",result);
return 0;
}

//function to convert binary to decimal 
int convert(long n)
{
    int dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}
//function to check the sign bit 
int check_sign (int sign)
{
    if (sign==1)
    {
     printf("it is a negative number\n");
     sign=-1;
    }
    else if (sign==0)
    {
     printf("it is a positive number\n");
     sign=1;
    }
    else 
     printf("invalid input!!!\n");
     
    return (sign);
    
}
//convert mantissa
float convert_mantissa()
{
	int i;
    printf("enter mantissa- that is next 23 digit with space in between \n");
    int elem;
    int n[23]={ };
    for(i=0;23>i;i++)
    {
      scanf("%d",&n[i]);
    }
    for (i = 0; i < 23; i++)
            printf("%d ", n[i]);
            
    float dec2 = 0;
    
unsigned rem;

    while (i<23)
    {
       if(n[i]==1)
        dec2 += n[i]* (1/pow(2, i+1));
        i++;
    }

   printf("\n after dec= %f \n",dec2);
    
    return dec2;
}
