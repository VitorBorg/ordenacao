
int main(){

}

//BUBBLE vai trocando os valores em dupla a partir do incio, e ordena do final para o inicio
//basicamente vai jogando o maior para o final

int insertion(int vet[], int size){
    int run, front, temp;

    for(run = 0; run < size - 1; run++){  // comeca a partir do primeiro indice, e vai ate o penultimo valor
        for(front =  0; front < size-run-1; front++){ // comeca a partir do primeiro indice, e vai ate o valor que ainda nao esta ordenado
            if(vet[front] > vet[front + 1]){ // se o maior estiver atras, joga pra frente
                temp = vet[front];
                vet[front] = vet[front + 1];
                vet[front + 1] = temp;
            }
        }      
    }

}
