//Given a time (hours as HH and minutes as MM), determine the smaller angle between the two hands of a clock showing the time and print it.
#include <stdio.h>

int main() {
	int h,m;
	printf("Enter the value of H and M: ");
	scanf("%d%d",&h,&m);
	float ans;
	ans=(30*h)-(11*m)/2.0;
	if(ans<=360/2){
		printf("%.7f",ans);
	}
	else if(ans<=360 && ans>360/2)
	{
		printf("%.7f",360-ans);
	}
	else{
		printf("%.7f",ans-360);
	}
	return 0;
}
