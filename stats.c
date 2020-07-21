/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file   stats.c
 * @brief  Some statistical operations are performed on data and results  are
 *         printed out
 *
 * This C program displays certain statistics of the array "test" and prints 
 * them out .It also prints the array "test" and sorts the same in descending
 * order and prints it out .
 *
 * @author Naveen Kusumanchi
 * @date 21 July 2020
 *
 */



#include <stdio.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() 
{
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 print_array(test,SIZE);
 print_stats(test,SIZE);
 print_array(test,SIZE);	

}

void swap_uchar(unsigned char* a,unsigned char* b)
{
  unsigned char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void print_array (unsigned char *arr ,unsigned int len)
{
  int i;
  printf("The  array elements :\n{ ");
  for (i=0;i<len;i++)
  { if (i%5==0)
	printf ("\n"); 
    printf("%4d ",*(arr+i));
  }
  printf(" }\n");
}

void print_stats(unsigned char * arr,unsigned int len)
{
  printf("\nThe statistics are shown below:\n");
  printf("Median of data: %d\n",find_median(arr,len));
  printf("Mean of data: %d\n",find_mean(arr,len));
  printf("Largest val in data: %d\n",find_maximum(arr,len));
  printf("Smallest val in data: %d\n\n",find_minimum(arr,len));
}

unsigned char find_median(unsigned char *arr,unsigned int len)
{
  sort_array(arr,len);
  unsigned char median;
  if (len%2==0)	
    median = (*(arr+(len/2)-1)+ *(arr+(len/2)))/2;
  else
    median = *(arr+((len-1)/2));
  return median;
}
unsigned char find_mean(unsigned char *arr,unsigned int len)
{
  float mean=0;
  unsigned int i;
  for (i=0;i<len;i++)
  {
    mean += *(arr+i);
  }
  mean = mean/len;
  mean = round(mean);
  return (unsigned char)mean;
}

unsigned char find_maximum(unsigned char *arr,unsigned int len)
{
  unsigned int i;
  unsigned char max;
  for (i=0;i<len;i++)
  {
    if (i==0)
      max = *(arr);
    if (max<*(arr+i))
      max= *(arr+i);
  }
  return max;
}

unsigned char find_minimum(unsigned char *arr,unsigned int len)
{
  unsigned int i;
  unsigned char min;
  for (i=0;i<len;i++)
  {
    if (i==0)
      min = *(arr);
    if (min>*(arr+i))
      min= *(arr+i);
  }
  return min;
}

void sort_array(unsigned char *arr,unsigned int len)
{
  unsigned char max;
  for(int i=0;i<len;i++)
  {  max =*(arr+i);
     for(int j=i+1;j<len;j++)
     {
       if (max<*(arr+j))
         swap_uchar(&max,arr+j);
     }
     *(arr+i)=max;
  }
}

