# Multivibrador Astável com dois Transistores – Saídas Q e Q̅

O circuito mostrado é um **multivibrador astável**, capaz de gerar **ondas quadradas contínuas** sem necessidade de sinal externo.  
Ele alterna automaticamente entre dois estados, produzindo duas saídas:
- **Q** → Saída direta (onda quadrada normal)  
- **Q̅** → Saída inversora (com defasagem de 180° em relação à Q)

---

<img src="fig1.png" alt="Circuito Multivibrador Astável" width="30%">

## **Funcionamento**
1. **Início do ciclo**
   - Suponha que o transistor **Q1** esteja saturado (ligado).  
   - Isso faz com que **Q2** esteja cortado (desligado).  
   - A saída **Q** está em **nível baixo**, e a saída **Q̅** em **nível alto**.

2. **Carregamento dos capacitores (C1 e C2)**
   - O capacitor **C1** começa a carregar através do resistor **R2**, criando um atraso controlado.
   - Quando a tensão no capacitor atingir o ponto de disparo, **Q1 desliga** e **Q2 liga**.

3. **Troca de estados**
   - Agora **Q2** satura, levando a saída **Q̅** para **nível baixo** e a saída **Q** para **nível alto**.
   - Enquanto isso, **C2** inicia o carregamento, preparando a próxima comutação.

4. **Oscilação contínua**
   - Esse processo se repete indefinidamente, resultando em um sinal de **onda quadrada** alternado nas saídas.

---

## **Função dos componentes**
| Componente | Função |
|------------|--------|
| **Q1 e Q2** | Alternam entre saturação e corte, gerando a oscilação. |
| **C1 e C2** | Determinam, junto com os resistores, o tempo de cada meio-ciclo. |
| **R2 e R3** | Controlam a polarização das bases dos transistores e, junto com os capacitores, definem a frequência. |
| **R1 e R4** | Limitam a corrente nas saídas **Q** e **Q̅**. |

---

## **Equação aproximada do período**
O período de oscilação (**T**) pode ser calculado por:

\[
T \approx 0,693 \times (R2 + R3) \times C
\]

- **C** = C1 = C2 (capacitores idênticos)
- **R2 e R3** = Resistores iguais

Como o circuito é simétrico, a frequência (**f**) será:


<img src="forma_onda.gif" alt="forma de onda" width="30%">

\[
f = \frac{1}{T}
\]

---

## **Características do sinal**
- A saída **Q** gera uma **onda quadrada**.  
- A saída **Q̅** gera uma **onda quadrada invertida**, defasada 180° em relação a **Q**.  
- Esse tipo de circuito pode ser usado como:
  - Oscilador básico
  - Geração de clock para circuitos digitais
  - Pisca-pisca alternado
  - Temporizador simples

---
## **Aplicações práticas**
- Luzes de decoração (pisca-pisca de Natal).
- Sinalizadores de alerta.
- Temporizadores básicos.
- Geração de clock para circuitos digitais simples.
- Base de estudo para flip-flops e eletrônica sequencial.
