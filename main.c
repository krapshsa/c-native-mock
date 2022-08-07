#include<stdio.h>
#include "foo.h"

void __wrap_config_load() {
    printf("wrap\n");
}

int main() {
    foo();

    return 0;
}
