Feedback
  - exercicio1.c -- OK
  - exercicio2.c -- OK
  - exercicio3.c --
    - Note que se somar notas que na média gerarão valores quebrados, o cálculo fica incorreto.
    Isso porque quando você realiza as somas com número inteiros e divide por um inteiro, o resultado se dá como inteiro, mesmo que guardando em uma variável como float.
    Para corrigir há algumas maneiras:
     - ou alterando as variáveis de notas para valores como float (que julgo correto pois há notas quebradas, assim como a média)
     - ou dividir a soma das notas por 4.0 -> media = total / 4.0;
  - exercicio4.c -- OK
  - exercicio5.c -- OK
  - exercicio6.c -- OK
  - exercicio7.c -- OK
  - exercicio8.c --
    - Inicialize as variaveis char com = ""
    - Use fgets(variavel, fgets(variavel, sizeof(variavel), stdin);
    - Importe a biblioteca string.h para uso do fgets
    - Uma explicação sobre o uso do fgets ao invés do scanf quando falamos de input de string
    <img width="547" height="927" alt="image" src="https://github.com/user-attachments/assets/6ff475d2-0230-47f2-a7a2-e099c0489da0" />
