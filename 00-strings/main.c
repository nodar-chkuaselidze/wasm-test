#include <stdio.h>
#include "lib.h"

int main() {
  char some_str[] = "testing...";
  replace_dots(some_str);

  printf("%s", some_str);
  
  printf("%s", get_magic_str());
  return 0;
}
