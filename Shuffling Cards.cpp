#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define CARTA 13 
#define NAIPE 4

char cartas[CARTA][NAIPE];

char AdicionarCarta(int index){
    char valor;
    switch(index){
        case 0: valor = 'A'; break;
        case 1: valor = '2'; break;
        case 2: valor = '3'; break;
        case 3: valor = '4'; break;
        case 4: valor = '5'; break;
        case 5: valor = '6'; break;
        case 6: valor = '7'; break;
        case 7: valor = '8'; break;
        case 8: valor = '9'; break;
        case 9: valor = '0'; break;
        case 10: valor = 'Q'; break;
        case 11: valor = 'J'; break;
        case 12: valor = 'K'; break;
        default: valor = index + '0'; break;        
    }
    for(int i = 0; i<NAIPE; i++){
        cartas[index][i] = valor;
    }
}

int main(){
    unsigned seed = time(0);

    srand(seed);
    
    for(int i = 0; i< CARTA; i++){
        AdicionarCarta(i);
    }
        
    for(int y = 0; y<CARTA; y++){
        
        for(int x = 0; x<NAIPE; x++){
            int random_card = rand() % CARTA;
            cout << cartas[random_card][x] << " ";
        }
      
    }
    
}

