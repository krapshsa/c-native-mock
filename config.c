#include <stdio.h>
#include "config.h"

void config_load() {
    FILE *fp = NULL;

    fp = fopen("./non-exist.conf", "r");
    fseek(fp, SEEK_SET, 0);
    fclose(fp);
}
