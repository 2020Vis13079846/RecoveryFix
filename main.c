#include <stdio.h>
#include <igate.h>

int main()
{
    printf("Initializing USB...");
    init();
    printf("  [OK]\n");
    printf("Connecting to iPhone...");
    connect();
    printf("  [OK]\n");
    printf("Fixing iPhone...\n");
    send_command("setenv auto-boot true");
    send_command("saveenv");
    send_command("reboot");
    printf("  [OK]\n");
    return 0;
}
