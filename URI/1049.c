#include <stdio.h>

int main (void){
	char a[128], b[128], c[128];
		scanf("%s%s%s", &a, &b, &c);

	if(strcmp (a, "vertebrado") == 0){
	
			if(strcmp (b,"ave") == 0){
				if(strcmp (c,"carnivoro") == 0){
					printf("aguia\n");	
				} else {
					printf("pomba\n");
				}
			
			} else {				
				if(strcmp (c, "onivoro") ==0 ){
					printf("homem\n");
				} else {
					printf("vaca\n");
				}
			}
	} else {
	
			if(strcmp (b, "inseto") == 0){
				if(strcmp (c, "hematofago") == 0){
					printf("pulga\n");
				} else {
					printf("lagarta\n");
				}
			
			} else {
				if(strcmp (c, "hematofago") == 0){
					printf("sanguessuga\n");
				} else {
					printf("minhoca\n");
				}
			}
	}
return 0;

}
