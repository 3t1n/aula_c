#include <stdlib.h>
#include <stdio.h>

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
int area(int n1,int n2){
	return n1*n2;
}
int main() {
	int n1,n2;
	printAsciiImage(getSwordImage());
	printf("[+]Eai User suave? Informa a Base  --->   ");
	scanf("%d",&n1);
	printf("[+]Eai User suave? Informa a Altura --->   ");
	scanf("%d",&n2);
	printf("[+]Eai User suave? A area do seu retangulo com base %d e altura %d e ---> %d  ",n1,n2,area(n1,n2));
	return 0;
}
