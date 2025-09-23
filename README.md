
# Multivibrador Astável com Dois Transistores

O circuito mostrado na imagem é um **multivibrador astável**, que gera uma **oscilação contínua** sem precisar de sinal externo. É amplamente usado em piscas-piscas, temporizadores simples e até em circuitos de áudio.

---

## **Como funciona**
1. **Transistores alternando a condução**  
   - Os transistores **Q1** e **Q2** (NPN) estão ligados em configuração cruzada.
   - Quando **Q1 satura**, ele liga o LED1 e mantém o LED2 desligado.
   - Ao mesmo tempo, o capacitor **C1** começa a carregar, criando um atraso.

2. **Inversão automática**  
   - Quando C1 termina de carregar, a polarização muda e **Q1 desliga**, enquanto **Q2 liga**, acendendo o LED2.
   - O ciclo então se repete indefinidamente, fazendo os LEDs piscarem alternadamente.

---

## **Função dos componentes**
| Componente | Função |
|-------------|--------|
| **Q1 e Q2 (BC547)** | Alternam a condução, criando a oscilação. |
| **C1 e C2 (100 µF)** | Determinam o tempo em que cada LED fica aceso (constante de tempo). |
| **R2 e R3 (10 kΩ)** | Garantem a polarização correta das bases, controlando a corrente de disparo. |
| **R1 e R4 (470 Ω)** | Limitam a corrente que passa pelos LEDs, protegendo-os. |
| **LED1 e LED2** | Mostram visualmente o estado do circuito, piscando alternadamente. |
| **Fonte (5 V)** | Alimenta o circuito. |

---

## **Controle do tempo de piscada**
O tempo em que cada LED fica aceso depende da constante de tempo **R × C**:

```
T = 0,693 × R × C
```

- Com **R = 10 kΩ** e **C = 100 µF**, cada LED fica aceso por aproximadamente **0,7 s**, resultando em um ciclo total de **~1,4 s**.
- Para piscar **mais rápido**, use capacitores menores (ex.: 47 µF).
- Para **piscar mais devagar**, use capacitores maiores (ex.: 220 µF).

---

## **Aplicações práticas**
- Luzes de decoração (pisca-pisca de Natal).
- Sinalizadores de alerta.
- Temporizadores básicos.
- Geração de clock para circuitos digitais simples.
- Base de estudo para flip-flops e eletrônica sequencial.
