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



#endif