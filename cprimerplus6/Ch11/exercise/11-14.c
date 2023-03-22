/*
 * @Author: tangxiao
 * @Date: 2022-11-24 16:11:52
 * @LastEditTime: 2022-11-24 16:12:14
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <stdio.h> 
#include <stdlib.h>      /* for atof() */ 
#include <math.h>        /* for pow()  */ 
 
int main(int argc, char *argv[]) 
{ 
    double num, exp; 
     
    if (argc != 3) 
        printf("Usage: %s number exponent\n", argv[0]); 
    else 
    { 
        num = atof(argv[1]); 
        exp = atof(argv[2]); 
        printf("%f to the %f power = %g\n", num, exp, pow(num,exp)); 
    } 
     
    return 0; 
} 