#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>

typedef struct s_client
{
    int     id;
    char    msg[1024];
}   t_client;

t_client    clients[1024];  // 4
fd_set      current, write_set, read_set;
int         maxfd, gid = 0;
char        send_buffer[200000], recv_buffer[200040];

// write error message to stderr and exit, if no message write "Fatal error"
void    err(char *msg)
{
    // 6
}

void    send_to_all(int except) // send to all fd in set except the sender
{
    // 6
}

int     main(int ac, char **argv)
{
    //ac != 2

    // serveraddr + socket (check) + maxfd
    //5

    // bzero client serveraddr + clear fd set + add fd to set
    //4

    // server addr
    //3

    //2 bind and listen error if fail

    while (1)
    {
        //2 sets and select

        for (int fd = 0; fd <= maxfd; fd++)
        {
            if (FD_ISSET(fd, &read_set))
            {
                if (fd == serverfd) // new connection
                {
                    //8 accept, check, add fd and print
                    break;
                }
                else // client recv data
                {
                    // recv
                    if (ret <= 0) // recv failed or client disconnected
                    {
                        //5 close and print
                        break;
                    }
                    else
                    {   
                        for (int i = 0, j = strlen(clients[fd].msg); i < ret; i++, j++)
                        {
                            //buffer
                            if (clients[fd].msg[j] == '\n')
                            {
                                //5 print msg and clear
                            }
                        }
                        //2
                    }

                }
            }
        }
    }
}
