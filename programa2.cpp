#include <stdlib.h>
#include <stdio.h>

//   Fazer o algoritmo e fluxograma que peça quatro números ao usuário e calcule a média.


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
int media(int n1,int n2,int n3,int n4){
	return n1+n2+n3+2n4/4;
	
}
int main() {
	int n1,n2,n3,n4;
	printAsciiImage(getSwordImage());
	printf("[+]Eai User suave? Informa o primeiro numero --->   ");
	scanf("%d",&n1);
	printf("[+]Eai User suave? Informa o segundo numero --->   ");
	scanf("%d",&n2);
	printf("[+]Eai User suave? Informa o terceiro numero --->   ");
	scanf("%d",&n3);
	printf("[+]Eai User suave? Informa o quarto numero --->   ");
	scanf("%d",&n4);
	printf("[+]Eai User suave? A media de %d, %d, %d, %d e ---> %d  ",n1,n2,n3,n4,media(n1,n2,n3,n4));
	return 0;
}
