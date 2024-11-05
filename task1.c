#include<stdio.h>
#include<stdlib.h>
int main(){

	int x1,x2,y1,y2;
	int L1,W1,L2,W2;
	int x3,y3,x4,y4;
	int area;

	printf("please enter position x,y of rectangle 1 & Length and width  ");
	scanf("%d %d %d %d",&x1,&y1,&L1,&W1);

	printf("please enter position x,y of rectangle 2 & Length and width  ");
	scanf("%d %d %d %d",&x2,&y2,&L2,&W2);

	int state,temp;

	if(x1<x2 &&y1>y2)
	state=1;
	else
	state=0;


	if(state==1){
	x3=x1+W1;
	y3=y1-L1;
	x4=x2+W2;
	y4=y2-L2;
	if(x4<=x3 && y4>=y3){
	printf("the calculated area is %d",(L2*W2));
	
	}
	else if(x3>x2 && y2>y3 ){
	area= abs(x2-x3)*abs(y2-y3);
	printf("the calculated area is %d",area);
	}
	else{
       	printf("there is no overlap\n ");	
	return 0;
	}
	}
	else{
	temp=x1;
	x1=x2;
	x2=temp;
	temp=y1;
	y1=temp;
	y2=temp;
	x3=x1+W1;
	y3=y1-L1;
	x4=x2+W2;
	y4=y2-L2;
	if(x4<=x3 && y4>=y3){
	printf("the calculated area is %d",(L2*W2));
	
	}
	else if (x3>x2 && y2>y3 ){
	area= abs(x2-x3)*abs(y2-y3);
	printf("the calculated area is %d",area);
	}
	else{
       	printf("there is no overlap\n ");	
	return 0;
	}
	}
}
