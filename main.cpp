/* 
������ ����ϱ�

���� ����
�� ���� a, b�� �־��� �� ������ ���� ������ ������ ����ϴ� �ڵ带 �ۼ��� ������.

���� ����
1 �� a, b �� 100

#include <stdio.h>

int main(void) {
    int a;
    int b;

    scanf("%d %d\n", &a, &b);

    printf("%d + %d = %d", a, b, a + b);
    return 0;
}
*/

/*
���ڿ� �ٿ��� ����ϱ�

���� ����
�� ���� ���ڿ� str1, str2�� �������� ���еǾ� �Է����� �־����ϴ�.
����� ���� ���� str1�� str2�� �̾ ����ϴ� �ڵ带 �ۼ��� ������.

���� ����
1 �� str1, str2�� ���� �� 10

#include <stdio.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);

    printf("%s%s", s1, s2);

    return 0;
}
*/

/*
���ڿ� ������

���� ����
���ڿ� str�� �־����ϴ�.
���ڿ��� �ð�������� 90�� ������ �Ʒ� ����� ���� ���� ����ϴ� �ڵ带 �ۼ��� ������.

���� ����
1 �� str�� ���� �� 10

#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    for(int i = 0; i < s1[i]; i++)
    {
        printf("%c\n", s1[i]);
    }

    return 0;
}
*/

/*
Ȧ¦ �����ϱ�

���� ����
�ڿ��� n�� �Է����� �־����� �� ���� n�� ¦���̸� "n is even"��, Ȧ���̸� "n is odd"�� ����ϴ� �ڵ带 �ۼ��� ������.

���� ����
1 �� n �� 1,000

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if(a % 2 == 0)
    {
        printf("%d is even", a);
    }
    else if(a % 2 == 1)
    {
        printf("%d is odd", a);
    }
    else
    {

    }

    return 0;
}
*/

/*
���ڿ� ���ľ���

���� ����
���ڿ� my_string, overwrite_string�� ���� s�� �־����ϴ�. 
���ڿ� my_string�� �ε��� s���� overwrite_string�� ���̸�ŭ�� 
���ڿ� overwrite_string���� �ٲ� ���ڿ���return �ϴ� solution �Լ��� �ۼ��� �ּ���.

���� ����
my_string�� overwrite_string�� ���ڿ� ���ĺ����� �̷���� �ֽ��ϴ�.
1 �� overwrite_string�� ���� �� my_string�� ���� �� 1,000
0 �� s �� my_string�� ���� - overwrite_string�� ����

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, const char* overwrite_string, int s)
{
// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
 int len1 = strlen(my_string);
 int len2 = strlen(overwrite_string);

 char* answer = (char*)malloc(1);

 answer=my_string;

 for(int i=0; i<len2; i++)
 {
    answer[i+s] = overwrite_string[i];
 }

 return answer;
}
*/