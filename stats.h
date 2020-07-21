/****************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this softare in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file  stats.h
 * @brief consists of function declarations of functions that perform  
 *	  statistical operations and display results
 *
 * @author Naveen Kusumanchi
 * @date 20 July 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @breif prints the array of unsigned characters
 * 
 * This function takes a pointer to a unsigned character array and its
 * length as an unsigned integer as input and prints out the contents
 * of the array (5 elements per row)
 * 
 * @param arr The pointer to the array of unsigned char
 * @param len The length of the array
 * @return    nothing (void)
 */
void print_array(unsigned char * arr,unsigned int len); 

/**
 * @breif prints the stats of the input array
 * 
 * This function takes a pointer to a unsigned character array and its
 * length as an unsigned integer as input and prints out the following:
 *		-median 
 *		-mean	
 *		-largest element
 *		-smallest element
 * 
 * @param arr The pointer to the array of unsigned char
 * @param len The length of the array
 * @return    nothing (void)
 */
void print_stats(unsigned char * arr,unsigned int len);

/**
 * @breif finds the median of the input array
 * 
 * This function takes a pointer to a unsigned character array and its
 * length as an unsigned integer as input and returns the median (rounded to an int value)
 * 
 * @param arr The pointer to the array of unsigned char
 * @param len The length of the array
 * @return    The median or array as an unsigned character
 */
unsigned char find_median(unsigned char *arr,unsigned int len);

/**
 * @breif finds the mean of the input array
 * 
 * This function takes a pointer to a unsigned character array and its
 * length as an unsigned integer as input and returns the mean (rounded to an int value)
 * 
 * @param arr The pointer to the array of unsigned char
 * @param len The length of the array
 * @return    The mean of array as an unsigned character
 */
unsigned char find_mean(unsigned char *arr,unsigned int len);

/**
 * @breif finds the largest element of the input array
 * 
 * This function takes a pointer to a unsigned character array and its
 * length as an unsigned integer as input and returns the largest element (rounded to an int value)
 * 
 * @param arr The pointer to the array of unsigned char
 * @param len The length of the array
 * @return    The largest element of array as an unsigned character
 */
unsigned char find_maximum(unsigned char *arr,unsigned int len);

/**
 * @breif finds the smallest element of the input array
 * 
 * This function takes a pointer to a unsigned character array and its
 * length as an unsigned integer as input and returns the smallest element (rounded to an int value)
 * 
 * @param arr The pointer to the array of unsigned char
 * @param len The length of the array
 * @return    The smallest element of array as an unsigned character
 */
unsigned char find_minimum(unsigned char *arr,unsigned int len);

/**
 * @breif sorts the elements of the array in descendind order
 * 
 * This function takes a pointer to a unsigned character array and its
 * length as an unsigned integer as input and sorts(selection sort) the elements in descending order.
 * 
 * @param arr The pointer to the array of unsigned char
 * @param len The length of the array
 * @return    The smallest element of array as an unsigned character
 */
void sort_array(unsigned char *arr,unsigned int len);

#endif /* __STATS_H__ */
