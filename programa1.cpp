#include <stdlib.h>
#include <stdio.h>

//  Fazer o algoritmo e fluxograma que peça um número ao usuário e calcule o cubo [n3].


typedef struct AsciiImageStruct {
	char **data;
	int rows;
} AsciiImage;


//banner
AsciiImage getSwordImage() {
	static char *lines[] = {
		"        _ ",
		"       ( )",
		"       |=|",
		"       |=|",
		"   /|__|_|__|\\ ",
		"  (    ( )    )",
		"   \\|\\/\\\"/\\/|/",
		"     |  Y  |",
		"     |  |  |",             
		"     |  |  |",             
		"    _|  |  | ",           
		" __/ |  |  |\\ ",         
		"/  \\ |  |  |  \\ ",       
		"   __|  |  |   |  ",     
		"/\\/  |  |  |   |\\  ",   
		" <   +\\ |  |\\ />  \\  ", 
		"  >   + \\  | LJ    | ",
		"       + \\|+  \\  < \\ ",
		"  (O)      +    |    ) ",
		"   |             \\  /\\ ",
		" ( | )   (o)      \\/  )",
		"_\\\\|//__( | )______)_/ ",
		"        \\\\|// ",
		"",
		"C0D3D BY 3T1N ---> GITHUB : https://github.com/3t1n/ ",
		};
	return (AsciiImage){ lines, sizeof(lines)/sizeof(char*) };
}

void printAsciiImage(AsciiImage img) {
	int i;
	for(i=0; i<img.rows; i++) {
		printf("%s\n", img.data[i]);
	}
	printf("\n");
}

int cubo(int n){
	return n*n*n;
}

int main() {
	
	int n;
	printAsciiImage(getSwordImage());
	printf("[+]Eai User suave? Informa um numero ai --->   ");
	scanf("%d",&n);
	printf("[+]%d ao cubo e %d",n,cubo(n));
	return 0;
}
