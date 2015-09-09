#include <stdio.h>
#include <math.h>
int main(){
    char a, b, c;
    double d[3];
    scanf("%c %c %lf\n", &a, &b, &d[0]);
    scanf("%c %c %lf\n", &b, &c, &d[1]);
    scanf("%c %c %lf\n", &c, &a, &d[2]);
    double bd = d[0] - d[1];
    double cd = d[1] - d[2];
    double ad = d[2] - d[0];

    if ( bd > 0 ){
        if (( cd > 0 ) && ( ad < 0 )){
	    printf("%c %c %3.2lf\n", a, b, fabs(bd));
	    printf("%c %c %3.2lf\n", a, c, fabs(cd));
	    printf("Total = %3.2lf\n", fabs(ad));
	} 
        if (( cd < 0 ) && ( ad > 0 )){
	    printf("%c %c %3.2lf\n", c, b, bd);
	    printf("%c %c %3.2lf\n", c, a, ad);
	    printf("Total = %3.2lf\n", fabs(cd));
	} 
        if (( cd < 0 ) && ( ad < 0 )){
	    printf("%c %c %3.2lf\n", a, b, fabs(cd));
	    printf("%c %c %3.2lf\n", c, b, fabs(ad));
	    printf("Total = %3.2lf\n", bd);
	}
    }
    
    if ( bd < 0 ){
        if (( cd < 0 ) && ( ad > 0 )){
	    printf("%c %c %3.2lf\n", b, a, fabs(bd));
	    printf("%c %c %3.2lf\n", c, a, fabs(cd));
	    printf("Total = %3.2lf\n", ad);
	} 
        if (( cd > 0 ) && ( ad > 0 )){
	    printf("%c %c %3.2lf\n", b, a, ad);
	    printf("%c %c %3.2lf\n", b, c, cd);
	    printf("Total = %3.2lf\n", fabs(bd));
	} 
        if (( cd > 0 ) && ( ad < 0 )){
	    printf("%c %c %3.2lf\n", b, c, fabs(bd));
	    printf("%c %c %3.2lf\n", a, c, fabs(ad));
	    printf("Total = %3.2lf\n", cd);
	}
    }
    return 0;
}
