/*
VETORES

São Identificados por um tipo, nome e tamanho, 
podendo ser inicializados em suas declarações ou não.


O tipo do vetor representa o conteúdo que é armazenado, podendo ser inteiros, 
reais, caracteres, “strings”, estruturas e classes. 
Exemplos:
int u[5];
float v[3];
char w[4];
char x[6][max_sz_string]; (em C não tempos strings, mas sim uma sequência de caracteres).
minhaStruct y[7];
minhaClasse z[9];
*/

/*
INICIALIZAÇÃO DE UM VETOR 

- Por inicialização
int vet[3] = {1, 7, -3}

- Por atribuição 
int vet[3];

vet[0] = 1;
vet[1] = 7;
vet[2] = -3;

- Por leitura
int vet[3];

for (int i=0; i<3; i++) std::cin >> vet[i];
*/

/*
POSIÇÕES

- Os índices de um vetor se iniciam com 0 e vai até (tamanho)-1

OPERADOR COLCHETE []

-O operador colchetes serve para acessar a posição de um vetor, que pode operar de duas formas:

GET: 
o operador colchetes retorna o conteúdo da posição indicada. Funciona como get sempre que não estiver envolvido com um operador de atribuição de conteúdo, como, por exemplo, os operadores = e >> (no caso de std::cin);
std::cout << vet[2]; (Funcionando como get)

SET: 
o operador colchetes indica a posição em que seu conteúdo deve ser atribuído. Funciona como set sempre que estiver envolvido com um operador de atribuição de conteúdo.
vet[2] = “algo do tipo armazenado”; (Funcionando como set)


ATENÇÃO!!!
A linguagem C NÃO FAZ NENHUMA VERIFICAÇÃO nos índices de um vetor.
	O acesso a uma posição fora dos limites de um vetor pode acarretar na perda definitiva de informações importantes do sistema operacional.

