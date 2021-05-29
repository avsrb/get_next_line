#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    char    *line;
    int     fd;
    int     i;

    fd = open("text.txt", O_RDONLY);
    // printf("%d\n", fd);

    get_next_line(fd, &line);
    printf("%s\n", line);

    get_next_line(fd, &line);
    printf("%s\n", line);

	get_next_line(fd, &line);
    printf("%s\n", line);


	get_next_line(fd, &line);
    printf("%s\n", line);


	get_next_line(fd, &line);
    printf("%s\n", line);


	get_next_line(fd, &line);
    printf("%s\n", line);

    // while ((i = get_next_line(fd, &line)))
    // {
    //     printf("i = %d %s\n", i, line);
    //     free(line);
    //     printf("===========================================\n");
    // }
    // printf("i = %d %s\n", i, line);
    free(line);
}