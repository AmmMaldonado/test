#include <stdio.h>


int func1(){

	int a[5];
	
	int b[7];

	return 5+3;

}


int func2(){

	char c[4];

	char d[6];
	
	return 4+5;

}

int func3(){

	char *e = new char [10];
	
	delete[] e;
	
	return 33+44;

}



int main(){

	int total;
	
	total = func1() + func2() + func3();

	printf("%d", total);
}
