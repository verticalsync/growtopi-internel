#include <windows> // must nclude windosws or no wor1k if ur usering mac/linus then your not ready for this code 😈

int booleanFreeze = 1

void sys_freezer() {
  if (booleanFreeze) {
    do_freeze()
  } else {
  }
}

bool do_freeze() {
  if (booleanFreeze) {
    return true
  } else {
    return false
  }
}
