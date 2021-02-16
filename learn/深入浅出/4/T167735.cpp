#include <iostream>
using namespace std;

int main ()
{
    char s1[1010], s2[1010];
    int c1[256] = {0}, c2[256] = {0};
    scanf("%s %s", s1, s2);

    // printf("%s\n", s1);
    // printf("%s\n", s2);

    for(int i=0; s1[i]!='\0'; i++) {
        // printf("%c %d\n", s1[i], s1[i]);
        // c1[s1[i]]++;
        // c1[114]++;
        // c1['r']++;
        c1[s1[i]]++;
    }

    for(int i=0; s2[i]!='\0'; i++) {
        c2[s2[i]]++;
    }

    bool flag = false;

    for(int i=0; i<256; i++) {
        if(c1[i]!=c2[i]) {
            flag = true;
            break;
        }
    }

    if(flag==true) {
        printf("NO!\n");
    } else {
        printf("YES!\n");
    }
    // 0-255 2 ** 8
    // ASCII
    // utf8
    
    // for(int i=0; i<256; i++) {
    //     printf("编码：%d 字符：%c\n", i, i);
    // }
        // 97    122
    // if ('a' > 'z') {
    //     printf("a大");
    // }
    // else {
    //     printf("z大");
    // }

    // char a = 'a';

    // printf("%c\n", a);

    // a += 1;
    // printf("%c\n", a);

    // a += 6;
    // printf("%c\n", a);

    // 大小写转换

    // 'a' => 'A'

    // a - 97
    // A - 65

    // char a = 'b';
    // printf("%c\n", a); 
    // a -= 'a' - 'A';

    // printf("%c\n", a);   

    // string - 字符串 - 一堆字符 

    return 0;
}