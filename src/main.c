#include <stdio.h>

int main() {
  int a[5];
  int n;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
  int i0=1;
  int i1=1;
  int i2=1;
  int i3=1;
  int i4=1;
  int print=0;
  for (int i=0; i<n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
	if(a[0]==i0){
		printf("0");
		print=1;
		i0=0;		
	} 
	(i0)++;
	if(a[1]==i1){
		printf("1");
		print=1;		
		i1=0;		
	} 
	(i1)++;
	if(a[2]==i2){
		printf("2");
		print=1;
		i2=0;		
	} 
	(i2)++;
	if(a[3]==i3){
		printf("3");
		print=1;
		i3=0;		
	} 
	(i3)++;
	if(a[4]==i4){
		printf("4");
		print=1;
		i4=0;		
	} 
	(i4)++;
	if (!print) printf("-");	
	printf("\n");
	print=0;
  }

  return 0;
}
