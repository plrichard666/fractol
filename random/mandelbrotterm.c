#include <stdio.h>
#include <unistd.h>

int     main(void)
{
        int A,B,i;
        double a,b,x,y,t,n=15;
		  printf("Mandelbrot Set\n");
        for(B=0;B<=4*n;B++)
        {
            b=2-(B/n);
            for(A=0;A<=4*n;A++)
            {
                a=-2+(A/n);
                x=0.0;
                y=0.0;
                for(i=1;i<=1000;i++)
                {
                    t=x;
                    x=(x*x)-(y*y)+a;
                    y=(2*t*y)+b;
                    if(((x*x)+(y*y)) > 16)
                        break;
                }
                if(i==1001)
					// write(1,".",1);
					printf(".");

				else
					printf(" ");
            }
			printf("\n");
        }
	return (0);
}