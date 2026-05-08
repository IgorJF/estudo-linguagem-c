Projeto desenvolvido em C que carrega objetos a partir de arquivos `.dcg`, aplica transformações, e os renderiza numa tela no terminal.

**Autores:** Ana Luiza Gonçalves de Souza · Igor Jorge Ferraz
---
## Como compilar e executar

### Compilação

```bash
gcc main.c objeto.c viewport.c -Wall -o main.out -lm
```
| `main.c objeto.c viewport.c` - Arquivos-fonte
| `-Wall` | Ativa avisos |
| `-o main.out` | Nome do executável |
| `-lm` | Necessário para biblioteca math.h utilizada |

### Execução

```bash
./main.out
```
---

### Tela
Ao iniciar, o programa exibe uma tela vazia (100×50 caracteres).

### Desenhar Objeto

1. **Nome do arquivo** — deve ser digitado com a extensão completa, por exemplo:
   ```
   trianguloNDC.dcg
   ```
   O arquivo precisa estar na mesma pasta onde o programa foi executado.

2. **Posição X** — valor entre `0` e `99` (largura da tela).

3. **Posição Y** — valor entre `0` e `49` (altura da tela). - A funcao NDC irá normalizar as posições digitadas para se adequar ao padrão -1.0 a 1.

4. **Escala** — fator de tamanho do objeto. Use `1` para o tamanho original, `2` para o dobro, `0.5` para metade, etc.

5. **Rotação** — ângulo em graus, de `0` a `360`.

---

