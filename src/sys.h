#pragma once

extern unsigned long _syscall(int num, void *a, void *a0, void *a1, void *a2, void *a3, void *a4);

extern unsigned long strlen(char *sz);

extern unsigned long sys_print(char *str);

extern unsigned long sys_open(char *fn, long flags);

extern unsigned long sys_read(unsigned long fd, char *buff, unsigned long size);


