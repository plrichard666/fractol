#include "fractol.h"

int     mandlebroth(t_mlx *mlx)
{
	clearscreen(mlx);
	int A,B;
	double a,b,i,x,y,t;
	for(B=0;B<=4*mlx->n;B++)
	{
		b=mlx->max_val-(B/mlx->n);
		for(A=0;A<=4*mlx->n;A++)
		{
			a=mlx->min_val+(A/mlx->n); 
			x=0;
			y=0;
			for(i=1;i<mlx->max_i;i++)
			{
				t=x;
				x=(x*x)-(y*y)+a;
				y=(2*t*y)+b;
				if ((x*x)+(y*y)>4)
					break;
			}
			print_mandle(i,A,B,mlx);
		}
	}
	ft_putstring("Mandelbroth\n");
	printf("This is min_val %f\n and this is max_val %f\n", mlx->min_val,mlx->max_val);
	printf("This is max iteration %d\n", mlx->max_i);
	printf("This is n %f\n", mlx->n);
	return (0);
}
void	mandle_green(t_mlx *mlx)
{
	mlx->col.clr_black = COLOR_black;
	mlx->col.clr_10 = COLOR_1;
	mlx->col.clr_20 = COLOR_2;
	mlx->col.clr_30 = COLOR_3;
	mlx->col.clr_40 = COLOR_4;
	mlx->col.clr_50 = COLOR_5;
	mlx->col.clr_60 = COLOR_6;
	mlx->col.clr_70 = COLOR_7;
	mlx->col.clr_80 = COLOR_8;
	mlx->col.clr_90 = COLOR_9;
	mlx->col.clr_white = COLOR_white;
}
void	mandle_blue(t_mlx *mlx)
{
	mlx->col.clr_black = COLOR_black;
	mlx->col.clr_10 = COLOR_11;
	mlx->col.clr_20 = COLOR_12;
	mlx->col.clr_30 = COLOR_13;
	mlx->col.clr_40 = COLOR_14;
	mlx->col.clr_50 = COLOR_15;
	mlx->col.clr_60 = COLOR_16;
	mlx->col.clr_70 = COLOR_17;
	mlx->col.clr_80 = COLOR_18;
	mlx->col.clr_90 = COLOR_19;
	mlx->col.clr_white = COLOR_white;
}
void	mandle_red(t_mlx *mlx)
{
	mlx->col.clr_black = COLOR_black;
	mlx->col.clr_10 = COLOR_21;
	mlx->col.clr_20 = COLOR_22;
	mlx->col.clr_30 = COLOR_23;
	mlx->col.clr_40 = COLOR_24;
	mlx->col.clr_50 = COLOR_25;
	mlx->col.clr_60 = COLOR_26;
	mlx->col.clr_70 = COLOR_27;
	mlx->col.clr_80 = COLOR_28;
	mlx->col.clr_90 = COLOR_29;
	mlx->col.clr_white = COLOR_white;
}
void	mandle_black(t_mlx *mlx)
{
	mlx->col.clr_black = COLOR_black;
	mlx->col.clr_10 = COLOR_31;
	mlx->col.clr_20 = COLOR_32;
	mlx->col.clr_30 = COLOR_33;
	mlx->col.clr_40 = COLOR_34;
	mlx->col.clr_50 = COLOR_35;
	mlx->col.clr_60 = COLOR_36;
	mlx->col.clr_70 = COLOR_37;
	mlx->col.clr_80 = COLOR_38;
	mlx->col.clr_90 = COLOR_39;
	mlx->col.clr_white = COLOR_white;
}

void	init_mandle(t_mlx *mlx)
{
	mlx->min_val=-2.5,
	mlx->max_val=2.5;
	mlx->n=30;
	mlx->offset_x = 600;
	mlx->offset_y = 350;
	mlx->max_i=30;
	mandle_black(mlx);
	mandlebroth(mlx);
}