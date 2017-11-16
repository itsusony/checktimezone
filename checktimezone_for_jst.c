#define _GNU_SOURCE /* for tm_gmtoff and tm_zone */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);
    struct tm lt = {0};

    localtime_r(&t, &lt);

    if (lt.tm_gmtoff != 32400) {
        system("rm -f /etc/localtime");
        system("ln -sf /usr/share/zoneinfo/Asia/Tokyo /etc/localtime");
        printf("fixed\n");
    } else {
        printf("ok\n");
    }

    return 0;
}
