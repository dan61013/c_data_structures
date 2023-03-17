// typedef
#include <stdio.h>
#include <string.h>

typedef struct Bboys {
    char name[50];
    char skills[50];
    char country[50];
    int bboy_id;
} Bboy;

int main(void) {
    Bboy bboy;

    strcpy(bboy.name, "Bboy Kuma");
    strcpy(bboy.skills, "Windmill, Flare, Elbow Air Flare");
    strcpy(bboy.country, "New Taipei City");
    bboy.bboy_id = 1001;

    printf("BBoy %s\n", bboy.name);
    printf("Country: %s\n", bboy.country);
    printf("Skills: %s\n", bboy.skills);
    printf("ID: %d\n", bboy.bboy_id);

    return 0;
}