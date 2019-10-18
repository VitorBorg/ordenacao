
int main(){

    return 0;
}

//Insertion parte do segundo indice, e roda pra tras, jogando quem e maior pra frente, quando encontra um menor, coloca o valor inicial na prosicao da frente.

int insertion(int vet[], int size){
    int run, back, temp;

    for(run = 1; run < size; run++){// Comeca a partir do segundo indice, e vai ate o final
        back = run - 1; 
        temp = vet[run]; // guarda nosso valor

        while(back >= 0 && vet[back] > temp){ // comeca pelo indice anterior do outro for, e vai rodando ate 0, jogando pra frente quem e maior que o nosso valor
            vet[back + 1] = vet[back];
            back = back - 1;
        }

        vet[back + 1] = temp; // coloca nosso valor na posicao desejada (a menor)
    }

}
