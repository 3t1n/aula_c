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
//em metros
int area(float n1, float n2){
	return n1*n2;
}
//retorna a qnt de blocos
//800cm quadrados
int blocos(float area){
	return area/8;
}
//retorna custo dos blocos
float custo_blocos(float blocos){
	return blocos*1.6;
}
float custo_pedreiro(float area){
	return area*15;
}
//retorno em horas
float tempo(float area){
	return area *1.5;
}

int main() {
	float n1,n2,space,bloc,total;
	printAsciiImage(getSwordImage());
	printf("[+]Eai User suave? Informa a Altura do muro --->   ");
	scanf("%f",&n1);
	printf("[+]Eai User suave? Informe o comprimento do muro  --->   ");
	scanf("%f",&n2);
	space = area(n1,n2);
	bloc = blocos(space);
	total = custo_pedreiro(space)+custo_pedreiro(space);
	printf("[+]Eai User suave? Seu muro tem %2.f metros quadrados,com %2.f blocos \n",space,bloc);
	printf("[+]Seu muro custou %f reais em blocos \n",custo_blocos(bloc));
	printf("[+]Seu muro custou %2.f reais em mao-de-obra \n",custo_pedreiro(space));
	printf("[+]Seu muro custou no total %2.f reais \n",total);
	printf("[+]Seu muro demorou %2.f horas para ser construido \n",tempo(space));
	return 0;
}
