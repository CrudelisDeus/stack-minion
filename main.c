#include <stdio.h>
#include <time.h>

void logo(const char *name, const char *github) {
    static char buf[9];
    time_t now = time(NULL);
    struct tm t;
    localtime_r(&now, &t);

    printf("  / _ \\   %02d:%02d:%02d\n",
           t.tm_hour, t.tm_min, t.tm_sec);
    printf("\\_\\(_)/_/ %s\n", name);
    printf(" _//o\\_   %s\n", github);
    printf("  /   \\ \n\n");
}

int main() {
    logo("Dmytro Shvydenko", "github.com/CrudelisDeus");
    return 0;
}