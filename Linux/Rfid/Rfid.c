#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<termios.h>
#include<fcntl.h>
int main()
{
     int fd;
     char data[20];
     fd = open("/dev/ttyUSB1",O_RDWR );
     if (fd == -1)
     {
             printf("\n Unable to open file %d\n",fd);
             return -1;
     }
     struct termios my_termios;
     tcgetattr(fd, &my_termios);
     my_termios.c_iflag &= ~(IXON | IXOFF | IXANY);
     my_termios.c_oflag &= ~OPOST;
     my_termios.c_lflag &=~(ECHO | ECHOE | ICANON | ISIG | ECHONL);
     my_termios.c_cflag &=~(CSIZE | PARENB);
     my_termios.c_cflag &=~CRTSCTS;
     my_termios.c_cflag |=~CS8;
     my_termios.c_cflag |=~(CREAD | CLOCAL);
     my_termios.c_cflag |= B9600;
     my_termios.c_cc[VMIN]= 0;
     my_termios.c_cc[VTIME]= 0;
     my_termios.c_lflag &=~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL);
     tcsetattr(fd,TCSANOW, &my_termios);
     
     while(1)
     {
             printf("\n   Waiting for message\n");
	     sleep(4);
	     read(fd,data,sizeof(data));
	     if(data > 0)
	     {
		     for(int i=0;i<20;i++)
		     {
			     printf(" %c ",data[i]);
		     }
	     }
	     else
	     {
		     printf("Data not read");
	     }
	     memset(data,0,sizeof(data));
	     sleep(1);
	     printf("\n");

     }
     close(fd);
     return 0;
}
