#include "stdafx.h"


char BooksArray[MAX][MAX];
int NumbersArray[MAX];
char line[MAX];


int CountLines()
{
    FILE* file = fopen("BookList.txt", "rb");
    int lines = 1;
    char c;
    while (fscanf(file, "%c", &c) != EOF)
    {
        if (c == '\n')
        {
            lines++;
        }
    }
    fclose(file);
    return lines;
}


void init()
{
    FILE* file = fopen("BookList.txt", "rb");
    for (int i = 0; i < CountLines(); i++)
    {
        fscanf(file, "%s %d", BooksArray[i], &NumbersArray[i]);
    }
    fclose(file);
}


void BookSet()
{
    FILE* file1 = fopen("BookList.txt", "wb");
    fputs("", file1);
    fclose(file1);
    FILE* file2 = fopen("BookList.txt", "a");
    int j = 0;
    while (NumbersArray[j] != NULL)
    {
        fprintf(file2, "%s %d\n", BooksArray[j], NumbersArray[j]);
        j++;
    }
    fclose(file2);
}


void PrintBooks()
{
    system("clear");
    FILE* file = fopen("BookList.txt", "rb");
    printf("********************\n");
    printf("****책 목록 화면****\n");
    printf("책이름 대출가능권수\n");
    printf("********************\n\n");
    while (fgets(line, MAX, file) != NULL)
    {
        printf("%s", line);
    }
    printf("\n\n");
    fclose(file);
}


void Bookloan()
{
    printf("********************\n");
    printf("****책 대출 화면*****\n");
    printf("********************\n");
    char BookName[MAX];
    printf("대출할 책 이름 : ");
    scanf("%s", BookName);
    for (int i = 0; i < CountLines(); i++)
    {
        if (strcmp(BookName, BooksArray[i]) == 0)
        {
            NumbersArray[i]--;
            printf("대출이 완료되었습니다.\n");
            break; 
        }
    }
}


void ReturnBook()
{
    printf("********************\n");
    printf("****책 반납 화면****\n");
    printf("********************\n");
    char BookName[MAX];
    printf("반납할 책 이름 : ");
    scanf("%s", BookName);
    for (int i = 0; i < CountLines(); i++)
    {
        if (strcmp(BookName, BooksArray[i]) == 0)
        {
            NumbersArray[i]++;
            printf("반납이 완료되었습니다.\n");
            break; 
        }
    }
}

int main()
{
    int selected = 0;

    while (selected != 4)
    {
        printf("**********************\n");
        printf("1. 책 목록 보기\n");
        printf("2. 책 대출\n");
        printf("3. 책 반납\n");
        printf("4. 나가기\n");
        printf("**********************\n");
        printf("원하는 작업 번호 : ");
        scanf("%d", &selected);

        switch (selected) {
        case 1:
            PrintBooks();
            break;
        case 2:
            Bookloan();
            break;
        case 3:
            ReturnBook();
            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            break;
        default:
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
        }
    }

    return 0;
}
