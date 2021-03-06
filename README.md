# Noughts and Crosses
 **_Projeto de jogo da velha em Command Line Interface._**


## Regras do jogo:
- O jogo ocorre em um tabuleiro 3x3;
- O jogo será para duas pessoas jogarem, alternadamente;
- O jogador 1, sempre será o X e sempre iniciará o jogo;
- O jogador 2, sempre será a O e sempre será o segundo a jogar;
- O jogo pode ter 3 resultados: vitória do jogador 1, vitória do jogador 2 ou empate;
- Ganha o jogador que primeiro formar uma reta na diagonal, vertical ou horizontal do tabuleiro.

## Instruções de jogo:
- Os jogadores serão organizados da seguinte maneira:
    - O jogador X vai sempre ter as rodadas com números pares.
    - O jogador O vai sempre ter as rodadas com números ímpares.
- O sistema irá solicitar ao usuário em cada jogada para inserir qual a linha e coluna do tabuleiro do jogo da velha.

![linhas-e-colunas](https://user-images.githubusercontent.com/67652202/138625652-25fa1783-a48b-4ad0-a200-127aa6b5cfaf.png)
- O jogo termina quando alguém vence ou empata.
- Ao final da jogada, será solicitado se deseja jogar novamente.

### Done:
- [x] Criar uma matriz para representar o tabuleiro.
    - A Matriz deverá conter 9 posições, 3 linhas e 3 colunas
    - Deverá ser criado um tipo de interface gráfica para representar o tabuleiro
- [x] Criar o jogador 1(X) e 2(O), e preparar de forma intuitiva cada tentativa de jogada deles.
    - O sistema deve gerenciar cada rodada até o final do jogo
    - Sempre que o jogo terminar, perguntar se quer iniciar o jogo novamente.
- [x] Adicionar validações para jogadas inválidas.
    - Só permitir inserção de números.
    - Só pode escolher posições de 1 a 9 seguinte a numeração da linha e coluna conforme exibido no tabuleiro.
    - Só pode inserir uma jogada em uma posição que não estiver ocupada.
    - Se houver um vencedor ou empate as jogadas terminam.
- [x] O jogo se encerra quando houver um ganhador ou empate.
    - o primeiro jogador que conseguir fechar uma posição de sequência de 3 ícones (X ou O) vence.
    - o empate acontece se todas as posições forem preenchidas e ninguém conseguir fechar a sequência de 3 posições conforme regras.
