# Mini Tutorial sobre LEDs

## 1. O que é um LED?
O **LED** (*Light Emitting Diode*) é um **diodo semicondutor** que emite luz quando polarizado diretamente.  
É amplamente utilizado em iluminação, sinalização e displays por ser eficiente e durável.

---

## 2. Características Básicas
- **Polarizado** → tem terminal positivo (**ânodo**) e negativo (**cátodo**).  
- **Tensão típica de operação (Vf):**
  - Vermelho / Amarelo: ~1,8 a 2,2 V  
  - Verde: ~2,0 a 3,0 V  
  - Azul / Branco: ~3,0 a 3,6 V  
- **Corrente típica:** 10 a 20 mA

---

## 3. Identificação dos Terminais
- **Ânodo (+):** perna mais longa.  
- **Cátodo (–):** perna mais curta, lado com chanfro na cápsula.  

---

## 4. Uso com Resistor
O LED **precisa de um resistor em série** para limitar a corrente, evitando queimar.  

### Cálculo do resistor:
```
R = (Vfonte - Vf) / I
```

- **Vfonte:** tensão da fonte  
- **Vf:** tensão do LED  
- **I:** corrente desejada  

**Exemplo:**  
Fonte de 5 V, LED vermelho (Vf = 2 V), corrente de 15 mA  

```
R = (5 V - 2 V) / 0,015 A ≈ 200 Ω
```

---

## 5. Simbologia
Símbolo elétrico do LED:

<img src="img/leds.png" alt="les" width="30%">

(Setas representam emissão de luz)

---

## 6. Aplicações Comuns
- Indicadores de status (ON/OFF).  
- Iluminação residencial e automotiva.  
- Telas (matrizes e displays de 7 segmentos).  
- Sensores ópticos (em conjunto com fotodiodos).

---
