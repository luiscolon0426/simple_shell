#include "shell.h"
/**
 * Before fixing, me daba el adrress del test
 * del intranet. ahora nos da el address
 * de nuestro file :)
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getppid();
    printf("%u\n", my_pid);
    return (0);
}
