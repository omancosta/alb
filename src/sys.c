#include <syscall.h>

unsigned long _syscall(int num, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5);

unsigned long _strlen(char *sz) {
	int count = 0;
	while (*sz++)
		count++;
	return 0;
}

unsigned long sys_print(char *str) {
	return _syscall(SYS_write, (void *) 1, str, (void *) _strlen(str), 0, 0, 0);
}

unsigned long sys_open(char *fn, long flags) {
	return _syscall(SYS_open, fn, (void *)flags, 0, 0, 0, 0);
}

unsigned long sys_read(unsigned long fd, char *buff, unsigned long size) {
	return _syscall(SYS_read, (void *)fd, buff, (void *)size, 0, 0, 0);
}

unsigned long sys_reboot() {
	return _syscall(SYS_reboot, (void *)0xfee1dead, (void *)672274793, (void *)0x1234567, 0, 0, 0);
}
int main() {
	char *welcome = "AlbOS 0.1 Initializing...";
	sys_print(welcome);
	return 0;
}
