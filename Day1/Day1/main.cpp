/*���ڿ� ����ϱ�

���� ����
  ���ڿ� str�� �־��� ��, str�� ����ϴ� �ڵ带 �ۼ��� ������.

  ���ѻ���
  1 �� str�� ���� �� 1,000,000
  str���� ������ ������, ù° �ٿ� �� �ٷθ� �־����ϴ�.

#include <stdio.h>
#define LEN_INPUT 1000001

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    printf("%s", s1);

    return 0;
}

*/


/*a�� b ����ϱ�
* 
  ���� ����
  ���� a�� b�� �־����ϴ�. �� ���� �Է¹޾� ����� ���� ���� �������� ����ϴ� �ڵ带 �ۼ��� ������.

  ���ѻ���
  -100,000 �� a, b �� 100,000

#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}

*/

/*���ڿ� �ݺ��ؼ� ����ϱ�

  ���� ����
  ���ڿ� str�� ���� n�� �־����ϴ�.
  str�� n�� �ݺ��� ���ڿ��� ����� ����ϴ� �ڵ带 �ۼ��� ������.

  ���ѻ���
  1 �� str�� ���� �� 10
  1 �� n �� 5

#include <stdio.h>
#define LEN_INPUT 6

int main(void)
{
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);

    for(int i = 0; i < a; i++)
    {
        printf("%s", s1);
    }

    return 0;
}

/*��ҹ��� �ٲ㼭 ����ϱ�

  ���� ����
  ���� ���ĺ����� �̷���� ���ڿ� str�� �־����ϴ�. �� ���ĺ��� �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� ��ȯ�ؼ� ����ϴ� �ڵ带 �ۼ��� ������.

  ���ѻ���
  1 �� str�� ���� �� 20
  str�� ���ĺ����� �̷���� ���ڿ��Դϴ�.

#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", &s1);
    for (int i = 0; i < LEN_INPUT; i++)
    {
        if ((s1[i] >= 'a') && (s1[i] <= 'z'))
        {
            s1[i] -= 32;
        }
        else if((s1[i] >= 'A') && (s1[i] <= 'Z'))
        {
            s1[i] += 32;
        }
    }
    printf("%s", s1);
    return 0;
}

*/

/*Ư������ ����ϱ�
* 
  ���� ����
  ������ ���� ����ϵ��� �ڵ带 �ۼ��� �ּ���.

  #include <stdio.h>

int main(void)
{
    char special_symbol[] = "!@#$%^&*(\\'\"<>?:;";
    printf("%s\n", special_symbol);

    return 0;
}

*/


