## Introdução ao Tipo Abstrato de Dados (TAD) Pilha

### O que é um TAD?

Um Tipo Abstrato de Dados (TAD) é uma especificação de um tipo de dado que define o **comportamento** de um conjunto de dados, sem se preocupar com os detalhes de sua implementação. Em outras palavras, um TAD descreve _o que_ pode ser feito com os dados, e não _como_ isso é feito. Ele foca na interface e nas operações permitidas, abstraindo a complexidade interna. Isso promove a modularidade, reusabilidade e facilita a manutenção do código.

### A Pilha (Stack): Conceito e Princípio LIFO

A Pilha, também conhecida como Stack em inglês, é um TAD que opera sob um princípio muito específico e intuitivo: **LIFO (Last In, First Out)**, ou seja, Último a Entrar, Primeiro a Sair. Imagine uma pilha de pratos: o último prato que você coloca em cima é o primeiro que você retira. Da mesma forma, em uma pilha de dados, o último elemento inserido é o primeiro a ser removido.

Essa característica LIFO é o que define o comportamento da Pilha e a torna ideal para cenários onde a ordem inversa de processamento é necessária. Pense em um histórico de navegação em um navegador web: a página mais recentemente visitada é a primeira a ser "desfeita" quando você clica no botão "Voltar".

### Características Principais da Pilha

- **Acesso Restrito ao Topo:** Todas as operações de inserção e remoção ocorrem exclusivamente em uma das extremidades da pilha, conhecida como **topo**.
- **Inserção e Remoção Apenas no Topo:** Não é possível inserir ou remover elementos de posições intermediárias ou da base da pilha. Isso garante a integridade do princípio LIFO.
- **Estrutura Linear Homogênea:** Embora a implementação possa variar, conceitualmente a pilha é uma sequência linear de elementos do mesmo tipo.

## Conceitos Básicos e Operações Fundamentais

Para interagir com uma pilha, um conjunto de operações básicas é definido. Estas operações são a interface do TAD Pilha e garantem que o princípio LIFO seja sempre respeitado. A seguir, detalhamos as operações mais comuns:

### `empilhar(elemento)`: Inserindo um Elemento

A operação `empilhar` é responsável por adicionar um novo elemento ao topo da pilha. Quando um elemento é "empilhado", ele se torna o novo topo da pilha. É crucial que, ao implementar esta operação, seja verificada a capacidade da pilha (no caso de implementações com tamanho fixo, como arrays) para evitar um **overflow** (estouro de pilha), que ocorre quando se tenta adicionar um elemento a uma pilha já cheia.

### `desempilhar()`: Removendo um Elemento

A operação desempilhar remove o elemento que está no topo da pilha. De acordo com o princípio LIFO, este será sempre o último elemento que foi inserido. Antes de realizar um `desempilhar`, é fundamental verificar se a pilha não está vazia para evitar um **underflow** (subfluxo de pilha), que acontece quando se tenta remover um elemento de uma pilha vazia.

### `topo()`: Consultando o Topo

A operação `topo` permite acessar o elemento que está no topo da pilha sem removê-lo. Esta operação é útil quando se precisa apenas verificar qual é o próximo elemento a ser processado ou removido, sem alterar o estado da pilha. Assim como no `topo()`, é importante verificar se a pilha não está vazia antes de tentar acessar o topo para evitar erros.

### `estaVazia()`: Verificando se a Pilha está Vazia

A função `estaVazia()` retorna um valor booleano (`true` ou `false`) indicando se a pilha não contém nenhum elemento. Esta é uma operação essencial para prevenir underflows antes de tentar realizar um `desempilhar()` ou `topo()`.

### `estaCheia()`: Verificando se a Pilha está Cheia (para implementações com array)

A função `estaCheia()` também retorna um valor booleano, indicando se a pilha atingiu sua capacidade máxima. Esta operação é particularmente relevante para implementações de pilha baseadas em arrays, onde o tamanho é fixo. Ela é utilizada para prevenir overflows antes de um `empilha()`.

## Implementação da Pilha com Array em C++

A implementação de uma pilha utilizando um array é uma das formas mais diretas e eficientes, especialmente quando o tamanho máximo da pilha é conhecido ou pode ser estimado. Nesta abordagem, um array é usado para armazenar os elementos da pilha, e uma variável inteira (geralmente chamada `topo` ou `top`) é utilizada para rastrear a posição do elemento mais recente (o topo da pilha).

### Estrutura da Classe `PilhaArray` de inteiros

Vamos definir uma classe em C++ chamada `PilhaArray` armazenar o um tipo de dados inteiro. A classe terá os seguintes membros:

- `int* dados`: Um ponteiro para o array de inteiros que armazenará os elementos da pilha.
- `int topo`: Um inteiro que indica o índice do elemento no topo da pilha. Quando a pilha está vazia, `topo` geralmente é inicializado com -1.
- `int capacidade`: Um inteiro que armazena o tamanho máximo do array, ou seja, a capacidade máxima da pilha.

### Código Fonte: `PilhaArray.h`

```cpp
#include <iostream>

class PilhaArray {
private:
    int* dados;      // Ponteiro para o array que armazena os elementos
    int topo;        // Índice do elemento no topo da pilha
    int capacidade;  // Capacidade máxima da pilha

public:
    // Construtor: Inicializa a pilha com uma capacidade definida (padrão: 100)
    PilhaArray(int cap = 100) {
        capacidade = cap;
        dados = new int[capacidade]; // Aloca memória para o array
        topo = -1; // Pilha vazia
    }

    // Destrutor: Libera a memória alocada para o array
    ~PilhaArray() {
        delete[] dados;
    }

    // empilha(elemento): Insere um elemento no topo da pilha
    void empilha(const int elemento) {
        //Completar






    }

    // desempilhar(): Remove o elemento do topo da pilha
    void desempilhar() {
        // Completar







    }

    // topo(): Retorna o elemento do topo da pilha sem removê-lo
    int topo() {
      //Completar






    }

    //isEmpty(): Verifica se a pilha está vazia
    bool isEmpty() const {
        //Completar




    }

    // isFull(): Verifica se a pilha está cheia
    bool isFull() const {
        //Completar




    }

    // tamanho(): Retorna o número atual de elementos na pilha
    int tamanho() const {
        //Completar




    }
};
```

