
char    *get_next_line(int fd){
    static char*    rest;
    if (fd == -1) // BUFFER_SIZE invalid ?
        return (NULL);
}

ssize_t read_fd(int fd, void *buf, size_t count){

}

#include <fcntl.h>
int     main(void){
    int     fd;

    fd = open("file.txt", O_RDONLY);
    get_next_line(fd);
    close(fd);
    return (0);
}