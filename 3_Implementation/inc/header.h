#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define _CRT_SECURE_NO_WARNINGS 1

/**
 * @file header.h
 * @author Avi (ar329@srmist.edu.in)
 * @brief  mini_project
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _HEADER_H_
#define _HEADER_H_


typedef enum error_t{
	ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    START_EXISTS=1,
    NO_HEAD_EXIST=2,
    INVALID_NAME=4,
    ID_EXISTS=5
}error_t;



typedef struct Node{
	char name[20];
	char ISBN[20];
	char price[10];
}Node;

typedef struct Book{
	Node date;
	struct Book*next;
}book;


/**
 * @brief Display the records
 * @param book
 */

error_t PrintLink(book*h);

/**
 * @brief Delete the records
 * @param book
 */

error_t Delete(book*h);

/**
 * @brief Insert the revords
 * @param book
 */

error_t insert(book*h);

/**
 * @brief Choose the option
 * @param book
 */

void choose(book*h);

/**
 * @brief Display menu
*/

/**
 * @brief Great Link
*/

book*GreatLink();

void menu();

/**
 * @brief Search the records
 * @param book
 */

void Search1(book*h);

/**
 * @brief Search the records
 * @param book
 */

void Search2(book*h);

#endif