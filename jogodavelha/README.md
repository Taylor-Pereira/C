# Jogo da Velha em C

Este é um simples jogo da velha (tic-tac-toe) feito em linguagem C, jogado no terminal por dois jogadores.

## 🎮 Como jogar

O jogo é jogado em turnos por dois jogadores. Cada jogador escolhe uma posição de 1 a 9 no tabuleiro para marcar X ou O. O primeiro a alinhar três símbolos vence.

## 🧠 Funcionalidades

- Tabuleiro dinâmico no terminal
- Verificação de vitória ou empate
- Alternância de turnos entre os jogadores

## 🔧 Como compilar e executar

### Linux / WSL / Mac

```bash
gcc jogodavelha.c -o jogodavelha
./jogodavelha
```
### Windows (com MinGW)

```bash
gcc jogodavelha.c -o jogodavelha.exe
jogodavelha.exe
```

## 🧠 Lógica do Código

<img src="A_flowchart_in_2D_digital_design_illustrates_the_l.png" alt="Fluxograma do Jogo da Velha em C" width="600"/>

### 🔧 Funções principais:

- zeratabuleiro: Inicializa o tabuleiro com espaços vazios.
- exibeTabuleiro: Exibe o estado atual do tabuleiro no terminal.
- jogada: Recebe a jogada do jogador e valida as coordenadas.
- validaTabuleiro: Verifica se houve vitória nas linhas, colunas ou diagonais.
- verificaEmpate: Checa se todas as posições foram preenchidas sem vencedor.

### 🔁 Loop principal (main):

1. Inicializa o tabuleiro e define os jogadores.
2. Executa turnos alternados entre os jogadores.
3. Após cada jogada, verifica vitória ou empate.
4. Encerra o jogo se houver um vencedor ou empate.
