#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    static char buf[5000];
    printf(1, "draw sys call returns %d\n", draw((void*) buf, 5000));

    printf(1, "%s", buf);
    exit();
}