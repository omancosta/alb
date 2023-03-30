#include <syscall.h>

unsigned long _syscall(int num, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5);

unsigned long _strlen(char *sz) {
	int count = 0;
	while (*sz++)
		count++;
	return 0;
}

void print(char *str) {
	_syscall(SYS_write, (void *) 1, str, (void *) _strlen(str), 0, 0, 0);
}

int main() {
	char *welcome = "AlbOS 0.1 Initializing...";
	print(welcome);
	return 0;
}
