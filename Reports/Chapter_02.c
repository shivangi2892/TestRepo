#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main() {

  int n, tmp;
  char s[1000];
  int result[10] = {0};
  gets(s);
  n = strlen(s);

  while (n >= 0) {
    n--;
    tmp = s[n] - 48;

    if (tmp <= 9) {
      result[tmp]++;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", result[i]);
  }
  return 0;
}
