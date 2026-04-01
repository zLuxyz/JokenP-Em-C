# ✊✋✌️ Jokenpô em C

Um clássico jogo de **Pedra, Papel e Tesoura** desenvolvido em C. Desafie a inteligência artificial da máquina em um duelo de sorte e estratégia diretamente no seu terminal!

## 📝 Sobre o Projeto
Este projeto simula o tradicional jogo japonês, utilizando lógica de programação para determinar o vencedor baseado nas escolhas do usuário e em um gerador de números aleatórios para a máquina.

### Principais conceitos aplicados:
* **Estruturas de Decisão:** Uso de `switch case` para exibir as escolhas e `if/else` complexos para verificar as condições de vitória.
* **Randomização:** Utilização da função `rand()` com semente no tempo real (`srand(time(0))`) para garantir que a máquina nunca jogue igual.
* **Operadores Lógicos:** Uso de `&&` (E) e `||` (OU) para validar todas as possibilidades de vitória em uma única estrutura.

---

## 🕹️ Como Jogar
1.  Ao iniciar o programa, o menu de opções aparecerá:
    * **1** - Pedra 🪨
    * **2** - Papel 📄
    * **3** - Tesoura ✂️
2.  Digite o número correspondente à sua escolha.
3.  A máquina fará a escolha dela instantaneamente.
4.  O resultado (**Vitória, Derrota ou Empate**) será exibido na tela.

---

## 💻 Exemplo de Execução
```text
	---JOKEN PO---
	Escolha uma Opção:
1. Pedra
2. Papel
3. Tesoura
> 1

Jogador: Pedra - Máquina: Tesoura

VOCÊ GANHOU!!!
```

---

## 🛠️ Tecnologias e Compilação
* **Linguagem:** C (Padrão C99/C11)
* **Bibliotecas:** `stdio.h`, `stdlib.h`, `time.h`

**Para compilar:**
```bash
gcc jokenpo.c -o jokenpo
```

**Para rodar:**
```bash
./jokenpo
```

---
**Desenvolvido com lógica pura e café!** ☕🚀

---
