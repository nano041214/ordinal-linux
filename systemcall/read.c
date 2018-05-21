#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read(int fd, void *buf, size_t bufsize);
ssize_t write(int fd, const void *buf, size_T bufsize);
int open(const char *path, int flags);
int open(const char *path, int flags, mode_t mode);
