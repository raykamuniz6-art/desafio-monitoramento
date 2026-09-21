# desafio-monitoramento# Projeto Estruturas de Repetição

## 1. Identificação

**Aluno:** Rayka Leticia Muniz Dos Santos  
**Disciplina:** Algoritimos e Pensamento Computacional  
**Professora:** Profa. Karla Sartin  
**Título do projeto:** Sistema de Monitoramento de Temperatura

## 2. Objetivo

O programa tem como objetivo monitorar temperaturas informadas pelo usuário, comparando os valores com um limite definido. O sistema identifica as temperaturas acima do limite e encerra o monitoramento quando são registradas três temperaturas consecutivas acima desse valor.

## 3. Funcionamento do programa

Primeiro, o usuário informa o limite de temperatura. Depois, o programa recebe as temperaturas e verifica se cada valor informado é válido.

As temperaturas válidas são utilizadas para calcular a média, a maior temperatura, a menor temperatura, a quantidade de temperaturas e o percentual de temperaturas acima do limite.

Quando uma temperatura está acima do limite, o contador de temperaturas consecutivas é aumentado. Quando uma temperatura está dentro do limite, esse contador é reiniciado. O programa encerra automaticamente após três temperaturas consecutivas acima do limite.

## 4. Estruturas de repetição utilizadas

Foi utilizado o `do...while` para solicitar o limite de temperatura e repetir a solicitação caso seja informada uma entrada inválida.

Também foi utilizado o `while` para realizar o monitoramento das temperaturas até que sejam identificadas três temperaturas consecutivas acima do limite.

## 5. Como executar

O programa pode ser compilado utilizando o GCC:

```bash
gcc monitoramento.c -o monitoramento
