/* 
덧셈식 출력하기

문제 설명
두 정수 a, b가 주어질 때 다음과 같은 형태의 계산식을 출력하는 코드를 작성해 보세요.

제한 사항
1 ≤ a, b ≤ 100

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
문자열 붙여서 출력하기

문제 설명
두 개의 문자열 str1, str2가 공백으로 구분되어 입력으로 주어집니다.
입출력 예와 같이 str1과 str2을 이어서 출력하는 코드를 작성해 보세요.

제한 사항
1 ≤ str1, str2의 길이 ≤ 10

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
문자열 돌리기

문제 설명
문자열 str이 주어집니다.
문자열을 시계방향으로 90도 돌려서 아래 입출력 예와 같이 출력하는 코드를 작성해 보세요.

제한 사항
1 ≤ str의 길이 ≤ 10

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
홀짝 구분하기

문제 설명
자연수 n이 입력으로 주어졌을 때 만약 n이 짝수이면 "n is even"을, 홀수이면 "n is odd"를 출력하는 코드를 작성해 보세요.

제한 사항
1 ≤ n ≤ 1,000

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
문자열 겹쳐쓰기

문제 설명
문자열 my_string, overwrite_string과 정수 s가 주어집니다. 
문자열 my_string의 인덱스 s부터 overwrite_string의 길이만큼을 
문자열 overwrite_string으로 바꾼 문자열을return 하는 solution 함수를 작성해 주세요.

제한 사항
my_string와 overwrite_string은 숫자와 알파벳으로 이루어져 있습니다.
1 ≤ overwrite_string의 길이 ≤ my_string의 길이 ≤ 1,000
0 ≤ s ≤ my_string의 길이 - overwrite_string의 길이

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s)
{
// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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