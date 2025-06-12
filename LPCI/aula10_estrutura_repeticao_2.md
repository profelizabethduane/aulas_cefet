## Centro Federal de Educação Tecnológica de Minas Gerais - Unidade Contagem

**Disciplina:** Laboratório Programação de Computadores I

**Curso:** Engenharia Química - 1°Período

**Professora:** Elizabeth Duane

## Estrutura de Repetição "`while`" e "`do...while`"

**Instrução:** Cada exercício deve ser salvo separadamente em um arquivo `.c` ou `.cpp`. Deve-se criar o hábito de escrever informações sobre o código do arquivo. Preencher as informações de nome, data e descrição no início do arquivo.

Enviar atividades pelo SIGAA 

> - INCLUIR COMENTÁRIOS NO CÓDIGO
> - NÃO ENVIAR ARQUIVO COMPACTADO\! Enviar cada arquivo `.c` ou `.cpp` direto na pasta da tarefa no SIGAA.
>

### Exercícios de Fixação

Acesse a apresentação no link: [Estrutura de Repetição](https://docs.google.com/presentation/d/1GqQdHXTRTsCUUvsM8im9chdWjwaYGNkrB-jM_xqsCCs/edit?usp=sharing)

- Leia os slides da apresentação
- Digite e rode os exemplos de 1 à 6
- Salve o código de cada exemplo e submeta no SIGAA na respectiva tarefa.
  > Salve cada arquivo com o nome `exemplo1.c`, `exemplo2.c` ... (ou `.cpp`)

##
### Atividade Prática

**Exercício 1.** Leia o nome e a massa inicial de um elemento e simule o decaimento radioativo. A cada iteração, reduzir a massa pela metade até que reste menos de 1% da massa inicial.

**Entrada de Dados**

- O usuário deve informar:
  - O **nome do elemento radioativo** (ex.: "Cobalto-60").
  - A **massa inicial** do material (em gramas).

**Processo de Decaimento:**

1.  A cada iteração (que representa **uma meia-vida**):
    - A massa atual é reduzida à metade (`massa_atual = massa_atual / 2`).
2.  O loop repete até que a massa atual seja **menor que 1% da massa inicial**.

#### **Saída do Programa**

- **Durante a simulação (a cada iteração):**
  - Número da meia-vida (_contador_).
  - Massa restante (em gramas).
  - Porcentagem da massa restante em relação à inicial.
- **Ao final da simulação:**

  - Nome do elemento.
  - Massa inicial e final.
  - Total de meias-vidas calculadas.

**Exemplo:**

```
Digite o nome do elemento: Cobalto-60
Digite a massa inicial (em gramas): 150

Processo de Decaimento do Cobalto-60:
Meia-vida 1: 75.00 g (50.00%)
Meia-vida 2: 37.50 g (25.00%)
Meia-vida 3: 18.75 g (12.50%)
Meia-vida 4: 9.38 g (6.25%)
Meia-vida 5: 4.69 g (3.12%)
Meia-vida 6: 2.34 g (1.56%)

Resultado Final:
- Elemento: Cobalto-60
- Massa inicial: 150.00 g
- Massa final: 1.17 g (0.78%)
- Meias-vidas decorridas: 7
```

>**Dica:** No comando `printf`, para exibir o símbolo de porcentagem (`%`), você precisa usar dois símbolos seguidos (`%%`).
>
>`float valor = 50;`
>
>`printf("%.2f%%", valor);  // Saída: 50.00%`
>
> - `%.2f` → Formata o float com 2 casas decimais.
> - `%%` → Imprime o símbolo `%` literalmente.
> 
> Isso ocorre porque o `%` é um caractere especial em `printf` (usado para formatar valores, como `%d`, `%f`, etc.). Portanto, para imprimir o símbolo literalmente, você deve escapá-lo com outro `%`.
##

### Lista de Exercícios Conjunta: Para ser entregue em data posterior

Focar nos seguintes exercícios da _Lista 2_: 11, 12, 13, 14, 18, 20 e 22

> Esses exercícios serão entregues todos juntos conforme especificação no SIGAA. 
