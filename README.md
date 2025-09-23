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

- # Aula Prática – Confecção de PCI para Multivibrador Astável

## Objetivo
Ensinar aos alunos como projetar, confeccionar e testar uma **placa de circuito impresso (PCI)** para um **multivibrador astável** que faz dois LEDs piscarem alternadamente.

---

## Componentes utilizados

| Componente | Quantidade | Função |
|------------|------------|--------|
| **BC547 (Q1 e Q2)** | 2 | Alternam a condução, criando a oscilação. |
| **Capacitores 100 µF** | 2 | Definem o tempo em que cada LED fica aceso (constante de tempo). |
| **Resistores 10 kΩ (R2 e R3)** | 2 | Polarizam as bases dos transistores. |
| **Resistores 470 Ω (R1 e R4)** | 2 | Limitam a corrente que passa pelos LEDs. |
| **LEDs** | 2 | Indicam visualmente a alternância do circuito. |
| **Conector para fonte 5 V** | 1 | Alimenta o circuito. |
| **Interruptor S1 (opcional)** | 1 | Liga/desliga o circuito. |

---

## Materiais para confecção da PCI

- Placa fenolite cobreada (5 × 7 cm)
- Percloreto de ferro ou solução para corrosão
- Impressora a laser ou papel para transfer
- Ferro de passar roupa ou laminadora
- Fita isolante ou caneta para retoques
- Furadeira manual ou mini-retífica (broca 1mm)
- Estanho, ferro de solda e sugador
- Multímetro

---

## Etapas da aula

### 1. Estudo do circuito

Apresentar o **esquemático** do multivibrador:

```
Vcc (5V) → R1 → LED1 → Coletor Q1
Capacitor C1 cruzando para base Q2
Vcc (5V) → R4 → LED2 → Coletor Q2
Capacitor C2 cruzando para base Q1
R2 e R3 indo das bases para Vcc
```

**Explicar o funcionamento:**
- Quando **Q1 satura**, LED1 acende e LED2 apaga.
- Capacitores **C1 e C2** definem o tempo de comutação.
- LEDs alternam indefinidamente.

---

### 2. Desenho do layout da PCI

**Ferramentas sugeridas:**
- Software: **KiCad**, **EasyEDA**, **Proteus** ou **Fritzing**.

**Passos:**
1. Criar o desenho esquemático no software.
2. Posicionar os componentes:
   - LEDs na parte superior.
   - Transistores próximos aos LEDs.
   - Capacitores próximos às bases.
   - Resistor de 470 Ω alinhado em série com cada LED.
   - Conector de entrada de 5V no canto inferior.
3. Definir trilhas grossas para alimentação (5V e GND).
4. Adicionar nomeações e polaridade dos capacitores e LEDs.

---

### 3. Transferência para placa física

**Passos:**
1. Imprimir o layout **espelhado** em papel couchê ou sulfite.
2. Limpar a placa fenolite com **palha de aço** e álcool.
3. Posicionar a impressão sobre a placa e **transferir** usando:
   - Ferro de passar (temperatura alta, sem vapor, por 5 min).
   - Ou laminadora térmica (2–3 passagens).
4. Mergulhar em água morna e remover o papel cuidadosamente.
5. Retocar falhas com **caneta para circuito impresso**.

---

### 4. Corrosão da placa

1. Colocar a placa em **recipiente plástico**.
2. Cobrir com solução de **percloreto de ferro**.
3. Mexer suavemente até que o cobre exposto desapareça.
4. Lavar a placa em água corrente.
5. Secar bem.

⚠ **Segurança:** usar **luvas, óculos de proteção** e local ventilado.

---

### 5. Furação

- Usar **broca de 1 mm** para furos de resistores, LEDs e transistores.
- Furos maiores para o conector de alimentação.

---

### 6. Soldagem

**Dicas:**
- Começar soldando os **componentes menores** (resistores).
- Depois capacitores, transistores, LEDs e conectores.
- Observar a **polaridade dos LEDs e capacitores**.
- Evitar excesso de solda.
- Usar **sugador** para corrigir erros.

---

### 7. Teste do circuito

1. Conectar a fonte de **5V**.
2. Verificar se os LEDs piscam alternadamente.
3. Caso um LED fique sempre aceso:
   - Conferir **polaridade** dos capacitores e LEDs.
   - Testar transistores com multímetro.
4. Se ambos estiverem apagados, medir tensão na alimentação e bases.

---

## Layout recomendado

<img src="fig2.jpg" alt="multivibrador astável" width="40%">

---

## Resultados esperados

- LEDs piscando **alternadamente** a cada ~1 segundo.
- Circuito funcionando de forma estável com alimentação de 5V.

---

## Sugestões de melhorias

- Adicionar um **potenciômetro** em série com R2 e R3 para ajustar a velocidade de piscada.
- Usar **conector USB** como entrada de 5V.

---

