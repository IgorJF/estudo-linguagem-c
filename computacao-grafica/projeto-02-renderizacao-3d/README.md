# Projeto 2: Renderização 3D

Projeto em C que carrega um objeto 3D descrito por vértices e arestas, aplica transformações geométricas e desenha sua projeção em uma janela utilizando SDL2.

## Dependências

- GCC ou outro compilador compatível com C
- SDL2
- Biblioteca matemática padrão (`libm`), incluída com `-lm` em ambientes GCC

## Arquivos principais

- `main.c`: inicializa a SDL, carrega o cubo e mantém o loop da janela.
- `objeto-3d.c/.h`: representa o objeto, lê arquivos `.dcg` e aplica escala, translação e rotação.
- `algebra-matrizes.c/.h`: operações com matrizes 4x4 e vetores.
- `janela-sdl.c/.h`: criação da janela e desenho das arestas.
- `cubo-3d.dcg`: modelo do cubo usado pelo programa.
- `rasterizacao-arestas.c`: implementação independente para testar a rasterização de arestas.

## Formato do arquivo `.dcg`

O arquivo começa com a quantidade de pontos. Em seguida, cada linha contém as coordenadas `x y z` de um ponto. Depois vem a quantidade de arestas, seguida pelos pares de índices que conectam os pontos:

```text
quantidade_de_pontos
x1 y1 z1
x2 y2 z2
...
quantidade_de_arestas
indice_do_ponto_1 indice_do_ponto_2
...
```

Os índices das arestas correspondem às posições dos pontos no arquivo, começando em `0`.

## Compilação

Execute os comandos dentro desta pasta. Em Linux ou macOS, usando `pkg-config`:

```bash
gcc main.c objeto-3d.c janela-sdl.c algebra-matrizes.c -Wall -Wextra -o renderizacao-3d $(pkg-config --cflags --libs sdl2) -lm
```

Em um ambiente MinGW com SDL2 configurada no compilador, use:

```bash
gcc main.c objeto-3d.c janela-sdl.c algebra-matrizes.c -Wall -Wextra -o renderizacao-3d.exe -lmingw32 -lSDL2main -lSDL2 -lm
```

## Execução

O programa procura automaticamente o arquivo `cubo-3d.dcg` na pasta atual:

```bash
./renderizacao-3d
```

No Windows:

```powershell
.\renderizacao-3d.exe
```

Uma janela de 800x600 pixels será aberta. Feche a janela para encerrar o programa.

## Transformações

As funções de transformação alteram a `modelMatrix` do objeto:

- `escalaObjeto`: redimensiona nos eixos X, Y e Z.
- `transladaObjeto`: move o objeto no espaço.
- `rotacionaObjetoEixoX`, `rotacionaObjetoEixoY` e `rotacionaObjetoEixoZ`: rotacionam o objeto em graus.

As chamadas de rotação e translação podem ser habilitadas no `main.c` para experimentar diferentes posições e movimentos.
