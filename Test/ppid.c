#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t p_process_id;

	p_process_id = getppid();
  printf("%u\n",p_process_id);
  return (0);
}

