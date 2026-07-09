#include <stdio.h>

int main(void)
{
    LINUX_REBOOT_MAGIC2
    reboot();
    return 0;
}
