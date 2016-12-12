#include <iostream>
#include <stdlib.h>


void print_reverse(char * s){
	if (*s == '\0'){
		return;
	}
	if (*(s+sizeof(char)) == '\0'){
		std::cout << *s;
		return;
	}

	print_reverse(s + 2*sizeof(char) );
	std::cout << *s; 
}

int main(){
	
	print_reverse("Hello world my name is lmao");

	return 0;
}
