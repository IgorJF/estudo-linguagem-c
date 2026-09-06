# Exercicios de Linguagem C

Repositório com exercícios, trabalhos e implementações desenvolvidos durante a graduação. Cada pasta representa uma disciplina ou um grupo de estudos; os arquivos numerados são exercícios independentes, enquanto os arquivos com nomes descritivos normalmente implementam uma técnica específica.

## Guia do repositório

### `programacao-1/`

Exercícios introdutórios de programação em C, organizados em listas. Trabalham fundamentos como entrada e saída, tipos básicos, operadores, condicionais, laços, funções, vetores, matrizes, strings e recursão.

- `lista-01/`, `lista-02/` e demais listas: cada `exercicio-XX.c` é um programa independente para resolver um problema específico.
- `fibonacci.c`: exemplo isolado relacionado ao cálculo da sequência de Fibonacci.
- Arquivos com extensões como `exercicio-06.1.c` e `exercicio-06.2.c`: variações ou etapas diferentes do mesmo exercício.

### `estruturas-de-dados-1/`

Implementações das primeiras estruturas lineares e exercícios de manipulação de memória.

- `exercicios-praticos/`: uso e teste das estruturas implementadas.
- `listaestatica.c` e `listaestatica.h`: lista baseada em vetor, com operações de criação, inserção, remoção, consulta e exibição.
- `circular.c`: implementação de uma lista circular.
- `main.c`: programa de teste das operações da disciplina.

Os arquivos `.h` contêm as declarações públicas das funções; os `.c` contêm as implementações e os programas de teste.

### `estruturas-de-dados-2/`

Implementações e comparações de algoritmos clássicos de busca e ordenação sobre vetores.

- `busca-sequencial.c`: procura elemento por elemento.
- `busca-binaria.c`: procura em vetor ordenado dividindo o intervalo pela metade.
- `busca-forca-bruta.c`: busca direta de um padrão em uma sequência.
- `busca-kmp.c`: busca de padrões usando a tabela de prefixos do algoritmo KMP.
- `busca-boyermoore.c` e `busca-boyermoore-horspool.c`: variações da busca de Boyer-Moore.
- `ordenacao-bubble-sort.c` e `ordenacao-bubble-sort-com-parada.c`: Bubble Sort, incluindo uma versão que interrompe quando não há trocas.
- `ordenacao-insercao-direta.c`, `ordenacao-insercao-binaria.c` e `ordenacao-insercao-ternaria.c`: variações do método de ordenação por inserção.

Alguns programas exibem quantidade de comparações, deslocamentos ou tempo de execução para apoiar a análise dos algoritmos.

### `computacao-grafica/`

Projetos de representação, transformação e rasterização de objetos geométricos.

- [`projeto-01-renderizacao-2d/`](computacao-grafica/projeto-01-renderizacao-2d/): carrega objetos `.dcg`, converte coordenadas, aplica escala e rotação e desenha linhas em uma tela textual.
- [`projeto-02-renderizacao-3d/`](computacao-grafica/projeto-02-renderizacao-3d/): carrega um modelo 3D, aplica transformações com matrizes 4x4 e desenha suas arestas usando SDL2.

Cada projeto possui um README próprio com dependências, compilação e execução.

### `diversos/`

Exercícios avulsos que não foram associados a uma disciplina específica. São programas independentes e devem ser compilados individualmente.

## Compilação

Os exercícios são programas independentes. Para compilar um arquivo, use o compilador C disponível no ambiente, por exemplo:

```bash
gcc caminho/para/arquivo.c -Wall -Wextra -o programa
```

Execute o binário a partir da pasta adequada:

```bash
./programa
```

No Windows com MinGW, o executável normalmente será `programa.exe`.

## Como usar

Entre na pasta do exercício, compile o arquivo que contém `main` e execute o binário gerado. Por exemplo:

```bash
cd programacao-1/lista-01
gcc exercicio-01.c -Wall -Wextra -o exercicio-01
./exercicio-01
```

Arquivos que implementam apenas funções, como `listaestatica.c`, devem ser compilados junto com o programa de teste correspondente. Por exemplo:

```bash
cd estruturas-de-dados-1/exercicios-praticos
gcc main.c listaestatica.c -Wall -Wextra -o listaestatica
./listaestatica
```

No Windows com MinGW, use `listaestatica.exe` e execute com `./listaestatica.exe` ou `.\\listaestatica.exe` no PowerShell.

## Computação gráfica

Os projetos de computação gráfica possuem instruções próprias em seus READMEs:

- [Projeto 1: renderização 2D](computacao-grafica/projeto-01-renderizacao-2d/README.md)
- [Projeto 2: renderização 3D](computacao-grafica/projeto-02-renderizacao-3d/README.md)

## Convenções

- Os arquivos-fonte usam a extensão `.c` e os cabeçalhos compartilhados usam `.h`.
- Exercícios numerados seguem o padrão `exercicio-01.c`, `exercicio-02.c` etc.
- Arquivos gerados pela compilação, como executáveis e arquivos objeto, não devem ser versionados.
