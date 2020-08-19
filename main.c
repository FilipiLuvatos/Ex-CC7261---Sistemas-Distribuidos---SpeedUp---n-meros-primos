#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Filipi de Luca Valim dos Santos
//RA 22216027-7

int TestaPrimo1(int n) {
    int EhPrimo = 1, //em princ√≠pio, n √© primo
        d=2;
    if (n <= 1)
    EhPrimo = 0;

    while (EhPrimo == 1 && d <= n / 2) {
    if (n % d  == 0)
        EhPrimo = 0;
    d = d + 1;
    }
    return EhPrimo;
}


int TestaPrimo2(int n) {
    
    int EhPrimo = 1, //em princ√≠pio, n √© primo
        d=2,
        resto;
    if (n <= 1)
        EhPrimo = 0;

     while (EhPrimo == 1 && d <= n / 2) {
      resto = n % d;
          if (resto == 0)
              EhPrimo = 0;
          d = d + 1;
      }
    return EhPrimo;
}

int TestaPrimo3(int n) {
    
    int EhPrimo,
        d=3;
    if (n <= 1 || (n != 2 && n % 2 == 0))
        EhPrimo = 0;    /* nenhum numero inteiro <= 1 ou par > 2 e' primo */
    else
        EhPrimo = 1;        /* o numero e' primo ate que se prove o contrario */

    while (EhPrimo  && d <= n / 2) {
        if (n % d == 0)
            EhPrimo = 0;
        d = d + 2;        /* testar apenas √≠mpares*/
    }
    return EhPrimo;
}


int TestaPrimo4(int n) {
    int EhPrimo, //em princ√≠pio, n √© primo
        d=3;
    if (n <= 1 || (n != 2 && n % 6 == 1 && n % 6 == 5))
        EhPrimo = 0;    /* nenhum numero inteiro <= 1 ou ~ adjacente a 6 eh primo */
    else
        EhPrimo = 1;
    while (EhPrimo  && d <= n / 2) {
        if (n % d == 0)
            EhPrimo = 0;
        d = d + 2;
        }
    return EhPrimo;
}




/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//variavÈs de auxilio para calcular media de tempo
	
	float m1 = 0, media1 = 0; 
	float m2 = 0, media2 = 0;
	float m3 = 0, media3 = 0;
	float m4 = 0, media4 = 0;
	
	// Vetores para armazenar os tempos de execuÁ„o
	
	float vetMedia1[30];
	float vetMedia2[30];
	float vetMedia3[30];
	float vetMedia4[30];
	
	float valorEntrada = 0;
	float valorPrimo;
	
	int i,j, k, l; // variavÈis para os fors
	

	
	clock_t tempo;

	
	printf("Digite o numero para teste:");
	scanf("%f", &valorEntrada);
	
	/***************************************/
	
	for(i = 0; i < 30; i++){//Primeira FunÁ„o
		
		tempo = clock();	// inicio da mediÁ„o de tempo
		valorPrimo = TestaPrimo1(valorEntrada); // chamada de funÁ„o
		tempo = clock() - tempo; // fim da mediÁ„o de tempo
		vetMedia1[i] = tempo; // guardando os tempos obtidos
		
	}
	
	for(i = 0; i < 30; i++){ // loop para calcular a mÈdia de tempo
		
		m1 = m1 + vetMedia1[i]; // somatÛria
	
	}
	media1 = m1/30.0;
	
	printf("media de tempo 1: %lf\n", m1); //impress„o da media de tempo
	
	/**************************************************/
	
	for(i = 0; i < 30; i++){ // Segunda funÁ„o
		
	tempo = clock();		// inicio da mediÁ„o de tempo
	valorPrimo = TestaPrimo2(valorEntrada); // chamada de funÁ„o
	tempo = clock() - tempo; // fim da mediÁ„o de tempo
	vetMedia1[i] = tempo;  // guardando os tempos obtidos
		
	}
	
	for(i = 0; i < 30; i++){ // loop para calcular a mÈdia de tempo
		
		m2 = m2 + vetMedia1[i]; // somatÛria
	
	}
	media2 = m2/30.0; //impress„o da media de tempo
	
	printf("media de tempo 2: %lf\n", m2);
	/****************************************************/
	
		for(i = 0; i < 30; i++){//Terceira FunÁ„o
		
		tempo = clock();		// inicio da mediÁ„o de tempo
		valorPrimo = TestaPrimo3(valorEntrada); // chamada de funÁ„o
		tempo = clock() - tempo;  // fim da mediÁ„o de tempo
		vetMedia1[i] = tempo;  // guardando os tempos obtidos
		
	}
	 
	for(i = 0; i < 30; i++){ // loop para calcular a mÈdia de tempo
		
		m3 = m3 + vetMedia1[i]; // somatÛria
	
	}
	media3 = m3/30.0; //impress„o da media de tempo
	
	printf("media de tempo 3: %lf\n", m3);
	
	/***********************************************/
	
		for(i = 0; i < 30; i++){//Quarta FunÁ„o
		
		tempo = clock();		// inicio da mediÁ„o de tempo
		valorPrimo = TestaPrimo4(valorEntrada); // chamada de funÁ„o
		tempo = clock() - tempo;  // fim da mediÁ„o de tempo
		vetMedia1[i] = tempo;  // guardando os tempos obtidos
		
	}
	
	for(i = 0; i < 30; i++){ // loop para calcular a mÈdia de tempo
		
		m4 = m4 + vetMedia1[i]; // somatÛria
	
	}
	media4 = m4/30.0; //impress„o da media de tempo
	
	printf("media de tempo 4: %lf\n", m1);
	
	
	return 0;
}
