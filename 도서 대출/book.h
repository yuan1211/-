#pragma once

#ifndef _BOOK_H_
#define _BOOK_H_

char line[MAX];
int Toeic;
int Apple;
int English;
int Math;
int Speak;

char BooksArray[10][10];
long long int NumbersArray[MAX];

void init();
void PrintBooks();
void BookSet();
void Bookloan();
void ReturnBook();
int CountLines();

#endif