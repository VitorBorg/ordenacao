
int main(){
}

//Selection procura o menor valor no vetor, e coloca no inicio, e faz isso até o final
//ordena do inicio pro final

int insertion(int vet[], int size){
    int run, front, menor, menorID, temp;

    for(run = 0; run < size - 1; run++){ // comeca a partir do primeiro indice, e vai ate o penultimo valor
        menor = vet[run];
        menorID = run;

        for(front = run + 1; front < size; front++){ // vai rodando a partir do proximo index do outro for, e, quando acha um valor menor do que o guardado, troca
            if(vet[front] < menor){
                menor = vet[front];
                menorID = front;
            }
        }
    
        // pega nosso menor valor encontrado (que esta na variavel menor), e troca as posicoes com a posicao que o run esta
        temp = vet[run];
        vet[run] = vet[menorID];
        vet[menorID] = temp;
        
    }

}
