# Circuito Lógico: Divisor de Frequência

## Description
This algorithm calculates the frequency at the output of each flip-flop (FF) in an asynchronous counter.

**Author:** Silas Vasconcelos Cruz  
**Subject:** Sistemas Digitais

## Function: `funcao_Saida_FFs`

### Description
Calculates the frequency at the output of each FF and the corresponding period.

### Parameters
- `frequencia_In` (int): Input frequency to the counter.
- `numero_FFs` (int): Number of flip-flops in the counter.

### Return
- `int`: Always returns 0.

### Usage
```c
int frequencia_In = 100;  // Example input frequency
int numero_FFs = 4;      // Example number of flip-flops
funcao_Saida_FFs(frequencia_In, numero_FFs);
```
## Main Function: main
### Description
- **Main function to execute the script. Takes user input for frequency and number of FFs.**
## Variables
- **p (int): User input for frequency.**
- **q (int): User input for the number of FFs.**
## Usage
```c
int main(void) {
    int p = 0, q = 0;
    printf("Script com valores de Frequência e Tempo para transmissão de 8 bits!\n");
    printf("Digite o Valor da Frequência: ");
    scanf("%d", &p);
    printf("\nDigite o numero de FFs: ");
    scanf("%d", &q);
    return funcao_Saida_FFs(p, q);
}
````
## Example Input
```c
Script com valores de Frequência e Tempo para transmissão de 8 bits!
Digite o Valor da Frequência: 100
Digite o numero de FFs: 4
```
## Example Output
- **A freqência de Sáida para o FF(1) é de 50.00 Hz**
- **Período para o FF(1):  0.02 segundos**
  
- **A freqência de Sáida para o FF(2) é de 25.00 Hz**
- **Período para o FF(2):  0.04 segundos**
  
- **A freqência de Sáida para o FF(3) é de 12.50 Hz**
- **Período para o FF(3):  0.08 segundos**
  
- **A freqência de Sáida para o FF(4) é de 6.25 Hz**
- **Período para o FF(4):  0.16 segundos**
