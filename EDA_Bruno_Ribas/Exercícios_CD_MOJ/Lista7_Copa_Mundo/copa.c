#include <stdio.h>

int main(void) {
  int time1 = 0, time2 = 0;
  char oitavas[8];
  char quarta[4];
  char semi[2];

  for (int i = 0; i < 8; i++) {
    scanf("%d %d", &time1, &time2);
    if (time1 > time2) {
      oitavas[i] = 'A' + (2 * i);
    } else {
      oitavas[i] = 'A' + (2 * i) + 1;
    }
  }

  for (int i = 0; i < 4; i++) {
    scanf("%d %d", &time1, &time2);
    if (time1 > time2) {
      quarta[i] = oitavas[2 * i];
    } else {
      quarta[i] = oitavas[2 * i + 1];
    }
  }

  for (int i = 0; i < 2; i++) {
    scanf("%d %d", &time1, &time2);
    if (time1 > time2) {
      semi[i] = quarta[2 * i];
    } else {
      semi[i] = quarta[2 * i + 1];
    }
  }

  scanf("%d %d", &time1, &time2);

  time1 > time2 ? printf("%c\n", semi[0]) : printf("%c\n", semi[1]);

  return 0;
}