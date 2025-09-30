# Tutorial sobre Capacitores

## 1. O que é um Capacitor?
Um **capacitor** é um componente eletrônico capaz de **armazenar energia elétrica** na forma de campo elétrico.  
Ele é formado basicamente por **duas placas condutoras** separadas por um material isolante (dielétrico).

- **Símbolo**:  
  - Polarizado: ![símbolo capacitor eletrolítico](https://upload.wikimedia.org/wikipedia/commons/thumb/3/3a/Electrolytic_capacitor_symbol.svg/32px-Electrolytic_capacitor_symbol.svg.png)  
  - Não polarizado: ![símbolo capacitor](https://upload.wikimedia.org/wikipedia/commons/thumb/9/96/Capacitor_symbol.svg/32px-Capacitor_symbol.svg.png)

---

## 2. Unidade de Medida
A grandeza que caracteriza o capacitor é a **capacitância (C)**, medida em **farads (F)**.

- **1 farad (F)** = capacidade de armazenar 1 coulomb (C) de carga elétrica por 1 volt (V).  
- Valores comuns em eletrônica: **pF (picofarads), nF (nanofarads), µF (microfarads)**.

---

## 3. Tipos de Capacitores

1. **Cerâmicos**  
   - Pequenos valores de capacitância (pF a nF).  
   - Usados em circuitos de alta frequência e desacoplamento.

2. **Eletrolíticos**  
   - Grandes valores (µF a centenas de µF).  
   - Polarizados (têm positivo e negativo).  
   - Usados em filtros de fontes de energia.

3. **Tântalo**  
   - Estáveis e com alta capacitância por volume.  
   - Também polarizados.

4. **Poliéster, Polipropileno, etc.**  
   - Boa estabilidade.  
   - Usados em áudio, RF e temporização.

---

## 4. Fórmulas Importantes

### 4.1 Carga armazenada
\[
Q = C \cdot V
\]

- **Q**: carga elétrica (coulombs)  
- **C**: capacitância (farads)  
- **V**: tensão (volts)

### 4.2 Energia armazenada
\[
E = \frac{1}{2} C \cdot V^2
\]

- **E**: energia (joules)

---

## 5. Associação de Capacitores

### Em Paralelo
\[
C_{eq} = C_1 + C_2 + C_3 + ...
\]

- A capacitância **aumenta**.

### Em Série
\[
\frac{1}{C_{eq}} = \frac{1}{C_1} + \frac{1}{C_2} + ...
\]

- A capacitância **diminui**.

---

## 6. Aplicações dos Capacitores

- **Filtro**: suavizam tensões em fontes retificadas.  
- **Acoplamento**: permitem passagem de sinal AC e bloqueiam DC.  
- **Desacoplamento**: reduzem ruídos em circuitos digitais.  
- **Temporização**: usados em conjunto com resistores (RC).  
- **Osciladores**: fundamentais em rádios e multivibradores.

---