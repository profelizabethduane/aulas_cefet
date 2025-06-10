#include <iostream>
class Fila
{
private:
	int *dados_;
	int frente_;
	int tras_;
	int tamanho_atual_; // quantos elementos foram inseridos
	int capacidade_;	// tamanho total da fila

public:
	// operações

	// inicializa uma fila vazia com a capacidade máxima igual à
	// capacidade
	// inicializa os atributos da classe
	Fila(int capacidade)
	{
	}
	// Destrutor da classe
	~Fila()
	{
	   delete[] dados_; // Libera o array alocado com 'new int[tamanho]'
	}
	// retorna verdadeiro se a fila estiver vazia
	// retorna falso, caso contrário
	bool Vazia()
	{
	}
	// retorna verdadeiro se a fila estiver cheia
	// retorna falso, caso contrário
	bool Cheia()
	{
	}

	void Enfileira(int valor)
	{
	   // verifica se a fila está cheia
           // insere valor na posição de trás da fila
	}

	// retorna o elemento da frente da fila
	int Frente()
	{
	}

	// retira o elemento da frente da fila
	void Desenfileira()
	{
	}
};

int main()
{

	// solicite ao usuário o tamanho máximo da fila.
	// crie uma fila vazia
	// faça um loop para que o usuário escolha entre as opçoes:
	//  1. incluir um número na fila
	//  2. remover um número da fila
	//  3. listar todos os números da fila na ordem de inserção
	//  4. sair

	// O item 3 deve ser implementado fora da classe.
	// Lembre-se que só é possível acessar o elemento da frente da lista.
	// É necessário desenfileirar para acessar o próximo elemento

	return 0;
}
