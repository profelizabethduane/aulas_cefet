## Centro Federal de Educação Tecnológica de Minas Gerais - Unidade Contagem

**Disciplina:** Laboratório de Linguagens e Técnicas de Programação

**Curso:** Técnico em Informática - 2°Período

**Professora:** Elizabeth Duane

**Data:** 17/06/2025

## Implementação de Pilha com Array

**Instrução:** Siga as instruções abaixo e entregue os exercícios no Moodle.

## Exercício 1: Pilha com Array Dinâmico de Inteiros

Neste primeiro exercício, você implementará uma pilha que armazena apenas números inteiros, utilizando um array alocado dinamicamente. A implementação será dividida em um arquivo de cabeçalho (`.hpp`) para a declaração da classe e um arquivo de código-fonte (`.cpp`) para a implementação dos métodos.

### Estrutura da Classe `PilhaArrayInt`

A classe `PilhaArrayInt` terá a seguinte estrutura:

* **Membros Privados:**

  * `int* dados`: Um ponteiro para o array que armazenará os elementos da pilha.
  * `int topo`: Um inteiro que indica o índice do elemento no topo da pilha. Quando a pilha está vazia, `topo` será -1.
  * `int capacidade`: Um inteiro que armazena o tamanho máximo do array, ou seja, a capacidade máxima da pilha.
* **Membros Públicos (Operações):**

  * **Construtor:** `PilhaArrayInt(int cap = 100)`: Inicializa a pilha com uma capacidade definida (padrão: 100).
  * Isso significa que se não for informado nenhum valor, a capacidade será 100, caso contrário será o valor definido na inicialização.
  * **Destrutor:** `~PilhaArrayInt()`: Libera a memória alocada para o array.
  * `void push(int elemento)`: Insere um elemento no topo da pilha.
  * `void pop()`: Remove o elemento do topo da pilha.
  * `int top()`: Retorna o elemento do topo da pilha sem removê-lo.
  * `bool isEmpty()`: Verifica se a pilha está vazia.
  * `bool isFull()`: Verifica se a pilha está cheia.
  * `int size()`: Retorna o número atual de elementos na pilha.

### `PilhaArrayInt.hpp` (Declaração da Classe)

Crie um arquivo chamado `PilhaArrayInt.hpp` e adicione o seguinte código:

```cpp
#ifndef PILHA_ARRAY_INT_HPP
#define PILHA_ARRAY_INT_HPP

#include <stdexcept> // Para std::overflow_error e std::underflow_error

class PilhaArrayInt {
private:
    int* dados;
    int topo;
    int capacidade;

public:
    PilhaArrayInt(int cap = 100);
    ~PilhaArrayInt();

    void push(int elemento);
    void pop();
    int top();
    bool isEmpty();
    bool isFull();
    int size();
};

#endif // PILHA_ARRAY_INT_HPP
```

### `PilhaArrayInt.cpp` (Implementação dos Métodos)

Crie um arquivo chamado `PilhaArrayInt.cpp` e adicione o seguinte código, e implemente os métodos que estão incompletos:

```cpp
#include "PilhaArrayInt.hpp"

// Construtor
PilhaArrayInt::PilhaArrayInt(int cap) {



}

// Destrutor
PilhaArrayInt::~PilhaArrayInt() {



}

// push(elemento): Insere um elemento no topo da pilha
void PilhaArrayInt::push(int elemento) {
    if (isFull()) {
        throw std::overflow_error("Erro: Pilha cheia (overflow)!");
    }


}

// pop(): Remove o elemento do topo da pilha
void PilhaArrayInt::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Erro: Pilha vazia (underflow)!");
    }


}

// top(): Retorna o elemento do topo da pilha sem removê-lo
int PilhaArrayInt::top() {
    if (isEmpty()) {
        throw std::underflow_error("Erro: Pilha vazia!");
    }


}

// isEmpty(): Verifica se a pilha está vazia
bool PilhaArrayInt::isEmpty() {


}

// isFull(): Verifica se a pilha está cheia
bool PilhaArrayInt::isFull() {


}

// size(): Retorna o número atual de elementos na pilha
int PilhaArrayInt::size() {


}
```

### `main.cpp` (Testando a Implementação)

Crie um arquivo `main_exercicio1.cpp` para testar a sua `PilhaArrayInt`. Compile e execute para ver o comportamento.

```cpp
#include <iostream>
#include "PilhaArrayInt.hpp"

int main() {
    PilhaArrayInt minhaPilha(5); // Cria uma pilha com capacidade para 5 inteiros

    std::cout << "Pilha vazia? " << (minhaPilha.isEmpty() ? "Sim" : "Nao") << std::endl;

    minhaPilha.push(10);
    minhaPilha.push(20);
    minhaPilha.push(30);

    std::cout << "Topo da pilha: " << minhaPilha.top() << std::endl; // Deve ser 30
    std::cout << "Tamanho da pilha: " << minhaPilha.size() << std::endl; // Deve ser 3

    std::cout << "Desempilhando: " << minhaPilha.pop() << std::endl; // Deve ser 30
    std::cout << "Novo topo: " << minhaPilha.top() << std::endl; // Deve ser 20

    minhaPilha.push(40);
    minhaPilha.push(50);
    minhaPilha.push(60); // Pilha cheia, deve lancar excecao

    try {
        minhaPilha.push(70); // Tentando empilhar mais um para testar overflow
    } catch (const std::overflow_error& e) {
        std::cerr << e.what() << std::endl;
    }

    while (!minhaPilha.isEmpty()) {
        std::cout << "Desempilhando: " << minhaPilha.pop() << std::endl;
    }

    try {
        minhaPilha.pop(); // Tentando desempilhar de pilha vazia para testar underflow
    } catch (const std::underflow_error& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Pilha vazia? " << (minhaPilha.isEmpty() ? "Sim" : "Nao") << std::endl;

    return 0;
}
```
- Compile e execute o código
- Envie o arquivo os três arquivos na atividade do dia no Moodle.

## Exercício 2: Pilha Genérica com Templates

Neste exercício, você implementará uma pilha genérica, capaz de armazenar elementos de qualquer tipo de dado (inteiros, floats, strings, objetos personalizados, etc.), utilizando templates em C++. Isso torna sua implementação muito mais flexível e reutilizável.

[Sobre Templates](https://github.com/profelizabethduane/aulas_cefet/new/main/LTPI#templates-em-c)

### Estrutura da Classe `PilhaGenerica`

A classe `PilhaGenerica` será muito similar à `PilhaArrayInt`, mas com a adição do template `typename T`.

* **Membros Privados:**

  * `T* dados`: Um ponteiro para o array que armazenará os elementos da pilha.
  * `int topo`: Um inteiro que indica o índice do elemento no topo da pilha.
  * `int capacidade`: Um inteiro que armazena o tamanho máximo do array.
* **Membros Públicos (Operações):**

  * **Construtor:** `PilhaGenerica(int cap = 100)`.
  * **Destrutor:** `~PilhaGenerica()`.
  * `void push(const T& elemento)`: Insere um elemento no topo da pilha.
  * `void pop()`: Remove o elemento do topo da pilha.
  * `T& top()`: Retorna o elemento do topo da pilha sem removê-lo.
  * `bool isEmpty()`: Verifica se a pilha está vazia.
  * `bool isFull()`: Verifica se a pilha está cheia.
  * `int size()`: Retorna o número atual de elementos na pilha.

### `PilhaGenerica.hpp` (Declaração e Implementação da Classe Template)

Para classes template, a declaração e a implementação geralmente ficam no mesmo arquivo `.hpp`. Crie um arquivo chamado `PilhaGenerica.hpp` e adicione o seguinte código:

```cpp
#ifndef PILHA_GENERICA_HPP
#define PILHA_GENERICA_HPP

#include <stdexcept> // Para std::overflow_error e std::underflow_error

template <typename T>
class PilhaGenerica {
private:
    T* dados;
    int topo;
    int capacidade;

public:
    // Construtor
    PilhaGenerica(int cap = 100) {
        capacidade = cap;
        dados = new T[capacidade];
        topo = -1;
    }
  
    // Destrutor
    ~PilhaGenerica() {
        delete[] dados;
    }
  
    // push(elemento): Insere um elemento no topo da pilha
    void push(const T& elemento) {
        if (isFull()) {
            throw std::overflow_error("Erro: Pilha cheia (overflow)!");
        }
        dados[++topo] = elemento;
    }
  
    // pop(): Remove e retorna o elemento do topo da pilha
    T pop() {
        if (isEmpty()) {
            throw std::underflow_error("Erro: Pilha vazia (underflow)!");
        }
        return dados[topo--];
    }
  
    // top(): Retorna o elemento do topo da pilha sem removê-lo
    T& top() {
        if (isEmpty()) {
            throw std::underflow_error("Erro: Pilha vazia!");
        }
        return dados[topo];
    }
  
    // isEmpty(): Verifica se a pilha está vazia
    bool isEmpty() const {
        return size == 0;
    }
  
    // isFull(): Verifica se a pilha está cheia
    bool isFull() const {
        return size == capacidade;
    }
  
    // size(): Retorna o número atual de elementos na pilha
    int size() const {
        return topo + 1;
    }
};

#endif // PILHA_GENERICA_HPP
```

### `main_generico.cpp` (Testando a Implementação Genérica)

Crie um arquivo `main_exercicio2.cpp` para testar a sua `PilhaGenerica` com diferentes tipos de dados.

```cpp
#include <iostream>
#include <string>
#include "PilhaGenerica.hpp"

int main() {
    // Testando com inteiros
    std::cout << "--- Testando Pilha de Inteiros ---" << std::endl;
    PilhaGenerica<int> pilhaInt(3);
    pilhaInt.push(10);
    pilhaInt.push(20);
    std::cout << "Topo (int): " << pilhaInt.top() << std::endl;
    pilhaInt.pop();
    std::cout << "Topo (int) apos pop: " << pilhaInt.top() << std::endl;

    // Testando com strings
    std::cout << "\n--- Testando Pilha de Strings ---" << std::endl;
    PilhaGenerica<std::string> pilhaString(2);
    pilhaString.push("Primeiro");
    pilhaString.push("Segundo");
    std::cout << "Topo (string): " << pilhaString.top() << std::endl;
    pilhaString.pop();
    std::cout << "Topo (string) apos pop: " << pilhaString.top() << std::endl;

    // Testando com floats
    std::cout << "\n--- Testando Pilha de Floats ---" << std::endl;
    PilhaGenerica<float> pilhaFloat(4);
    pilhaFloat.push(1.1f);
    pilhaFloat.push(2.2f);
    pilhaFloat.push(3.3f);
    std::cout << "Topo (float): " << pilhaFloat.top() << std::endl;
    pilhaFloat.pop();
    std::cout << "Topo (float) apos pop: " << pilhaFloat.top() << std::endl;

    // Testando excecoes
    try {
        pilhaInt.push(30);
        pilhaInt.push(40); // Deve lancar overflow
    } catch (const std::overflow_error& e) {
        std::cerr << "\nErro (int): " << e.what() << std::endl;
    }

    while (!pilhaString.isEmpty()) {
        pilhaString.pop();
    }
    try {
        pilhaString.pop(); // Deve lancar underflow
    } catch (const std::underflow_error& e) {
        std::cerr << "Erro (string): " << e.what() << std::endl;
    }

    return 0;
}
```

- Compile e execute o código
- Envie o arquivo os dois arquivos na atividade do dia no Moodle.

## Exercício 3: Verificador de Balanceamento de Símbolos

**Objetivo:** Utilizar a pilha para verificar se parênteses, colchetes e chaves em uma expressão estão corretamente balanceados. 

**Conceito:** Para cada símbolo de abertura, ele é empilhado. Para cada símbolo de fechamento, o topo da pilha é verificado. Se corresponder, ambos são considerados balanceados e o símbolo de abertura é desempilhado. Se não houver correspondência ou a pilha estiver vazia, há um erro.

### Expressões Balanceadas
Essas expressões têm todos os símbolos de abertura e fechamento corretamente pareados e organizados:

- `(a + b) * (c - d)`
- `[2 + 3 * (4 / 2)]`
- `{[a * (b + c)] + d}`
- `((1 + 2) * 3)`
- `[{()}]`

### Expressões Não Balanceadas
Essas têm símbolos de abertura ou fechamento faltando, ou estão na ordem errada:

- `(a + b]` → abre com (, fecha com ]
- `[2 + 3 * (4 / 2]` → falta fechar o (
- `{[a + b]` → falta fechar a {
- `(a + b))` → parênteses extras no final
- `[(])` → ordem incorreta dos símbolos



Crie um arquivo `main_exercicio2.cpp` e inclua o seguinte código:

**Implementação:**

```cpp
#include <iostream>
#include <string>
#include "PilhaGenerica.hpp" // Inclua sua PilhaGenerica.hpp

bool verificarBalanceamento(const std::string& expressao) {
    PilhaGenerica<char> pilha;

    for (char c : expressao) {
        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (pilha.isEmpty()) {
                return false; // Símbolo de fechamento sem correspondente
            }
            char topo = pilha.top();
            pilha.pop();

            if ((c == ')' && topo != '(') ||
                (c == ']' && topo != '[') ||
                (c == '}' && topo != '{')) {
                return false; // Símbolo de fechamento não corresponde ao de abertura
            }
        }
    }
    return pilha.isEmpty(); // Deve estar vazia no final se tudo estiver balanceado
}

int main() {
    std::cout << "--- Verificador de Balanceamento de Símbolos ---" << std::endl;

    std::string exp1 = "{ [ ( ) ] }";
    std::cout << exp1 << " eh balanceada? " << (verificarBalanceamento(exp1) ? "Sim" : "Nao") << std::endl; // Sim

    std::string exp2 = "{ [ ( ] ) }";
    std::cout << exp2 << " eh balanceada? " << (verificarBalanceamento(exp2) ? "Sim" : "Nao") << std::endl; // Nao

    std::string exp3 = "( ( ) ";
    std::cout << exp3 << " eh balanceada? " << (verificarBalanceamento(exp3) ? "Sim" : "Nao") << std::endl; // Nao

    std::string exp4 = "[ { } ] ( )";
    std::cout << exp4 << " eh balanceada? " << (verificarBalanceamento(exp4) ? "Sim" : "Nao") << std::endl; // Sim

    return 0;
}
```

- Compile e execute o código
- Envie o arquivo `main_exercicio2.cpp`.

## Exercício 4: Inversão de String usando Pilha

**Objetivo:** Inverter uma string utilizando uma pilha.

**Conceito:** A propriedade LIFO da pilha é perfeita para inversão. Ao empilhar cada caractere de uma string e depois desempilhá-los, eles sairão na ordem inversa da qual foram inseridos.

**Tarefa:**
- Crie uma função `std::string inverterString(const std::string& str)` que recebe uma string inserida pelo usuário e retorna a string invertida.
- Solicite ao usuário que digite uma frase e mostre-a em ordem inversa.
- Utilize a classe `PilhaGenerica.hpp`

Crie o arquivo `main_exercicio4.cpp` e inclua o seguinte código:

```cpp
#include <iostream>
#include <string>
#include "PilhaGenerica.hpp" // Inclua sua PilhaGenerica.hpp

std::string inverterString(const std::string& str) {
  std::string strInvertida = "";

  //Complete o código

  return strInvertida;
}

int main() {
    std::cout << "--- Inversao de String com Pilha ---/n";

    //Complete o código

    return 0;
}
```
- Complete o código 
- Compile e execute o código
- Envie o arquivo `main_exercicio4.cpp`.

---
## Templates em C++

Templates são um recurso poderoso do C++ que permitem escrever código **genérico**, ou seja, código que funciona com diferentes tipos de dados sem precisar duplicar a lógica.

## 🔧 Templates de Função

### ✨ Sem templates:

```cpp
int somaInt(int a, int b) {
    return a + b;
}

float somaFloat(float a, float b) {
    return a + b;
}
```

### Com templates:
```cpp
template <typename T>
T soma(T a, T b) {
    return a + b;
}
```

### Uso
```cpp
int r1 = soma(3, 4);         // Soma de int
float r2 = soma(3.5f, 2.1f); // Soma de float

```
## Templates de Classe
### Sem template:

```cpp
class PilhaInt {
    // Pilha de int
};

class PilhaFloat {
    // Pilha de float
};
```
### Com template:
```cpp
template <typename T>
class Pilha {
private:
    T elementos[100];
    int topo = -1;

public:
    void push(const T& valor) {
        elementos[++topo] = valor;
    }

    T pop() {
        return elementos[topo--];
    }
};
```
### Uso:
```cpp
Pilha<int> p1;
Pilha<float> p2;
```
### Dicas Importantes
- `template <typename T>` indica que T será substituído por um tipo ao usar a função/classe.

`typename` pode ser substituído por class, mas ambos funcionam do mesmo jeito:

```cpp
template <class T> // também é válido
```
### Quando usar Templates?
- Quando a lógica é igual para diferentes tipos de dados.
- Para evitar duplicação de código.
- Para tornar seu código mais limpo, reutilizável e moderno.

### Exemplo prático completo
```cpp
#include <iostream>

template <typename T>
T maior(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << maior(3, 5) << std::endl;       // int
    std::cout << maior(2.5, 1.8) << std::endl;   // double
    std::cout << maior('a', 'z') << std::endl;   // char
}
```

### Referêcias sobre templates
- https://www.geeksforgeeks.org/cpp/templates-cpp/
- https://www.programiz.com/cpp-programming/class-templates
