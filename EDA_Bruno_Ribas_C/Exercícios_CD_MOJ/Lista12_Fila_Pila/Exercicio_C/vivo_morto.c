#include <stdio.h>
#include <stdbool.h>

#define MAX_PARTICIPANTS 100

int participants[MAX_PARTICIPANTS];

void remove_participant(int participants[], int *n, int index) {
  int i;
  for (i = index; i < (*n) - 1; i++) {
    participants[i] = participants[i + 1];
  }
  (*n)--;
}

bool is_alive(int command, int action) {
  return command == action;
}

int main() {
  int test_case = 0;
  while (true) {
    int n, r;
    scanf("%d %d", &n, &r);
    if (n == 0 && r == 0) {
      break;
    }
    int i, j;
    for (i = 0; i < n; i++) {
      scanf("%d", &participants[i]);
    }
    for (i = 0; i < r; i++) {
      int m, command;
      scanf("%d %d", &m, &command);
      for (j = 0; j < m; j++) {
        int action;
        scanf("%d", &action);
        if (!is_alive(command, action)) {
          remove_participant(participants, &n, j);
          j--;
        }
      }
    }
    test_case++;
    printf("Teste %d\n%d\n\n", test_case, participants[0]);
  }
  return 0;
}
