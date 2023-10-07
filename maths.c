#include<stdio.h>
int main () {
//int coefEqu1[3]={-1,1,1}, coefEqu2[3]={1,1,3};
	printf("RESOLVING SYSTEME EQUATIONS\nLines :\n (1) aX + bY = c and (2) a1 x X + b1 x Y = c1\na,b,c,a1,b1,c1 are coefficients of Equations\n\n");
	int coefEqu1[3], coefEqu2[3];
		for(int j=0;j<2;j++){
			for (int i=0;i<3;i++){
				printf("Coefficient n°%d Equation n°%d\n",i+1,j+1);
//printf("%d coefficient Equation n°1\n",i+1);
				if (j==0) scanf("%d",&coefEqu1[i]); else scanf("%d",&coefEqu2[i]);
//scanf("%d",&coefEqu1[i]);
//printf("%d coefficient Equation n°2\n",i+1);
//scanf("%d",&coefEqu2[i]);
			}
		}

	int mult[3],mult1[3],sum[3],solu[2];
		for (int i=0;i<3;i++){
			mult[i]=*(coefEqu1+i)*(-*(coefEqu2));
			mult1[i]=*(coefEqu2+i)*(*(coefEqu1));
			sum[i]=mult[i]+mult1[i];
//printf("%d",*(coefEqu1+i));
//printf("%d\n",*(mult+i));
//printf("%d\n",*(mult1+i));
//printf("%d\n",*(sum+i));

		}
	solu[1]=sum[2]/sum[1];
	solu[0]=(coefEqu1[2]-solu[1])/coefEqu1[0];
	printf("Solutions of equations : %dx+%dy=%d and %dx+%dy=%d\nLines (1) and (2) intercept at the point A(X,Y)\nX and Y are equals to %d and %d .\n",coefEqu1[0],coefEqu1[1],coefEqu1[2],coefEqu2[0],coefEqu2[1] ,coefEqu2[2],solu[0],solu[1]); 
	return 0;
}
