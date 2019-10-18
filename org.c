
int main(){
	int run, front, menorId, menorValor, vetor[6] = {8,6,9,1,15,14}, size = 6;
	
	for(run = 0; run < size - 1; run++){
		menorValor = vetor[run];
		menorId = run;
		
		for(front = 0; front < size; front++){
			if(menorValor > vetor[front]){
				menorValor = vetor[run];
				menorId = run;
			}
		}
		
		vetor[menorId] = vetor[run];
		vetor[run] = menorValor;
	}
		
	
}
