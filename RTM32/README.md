# Documento de Google

[https://docs.google.com/document/d/1HEiqleXe3tDimIrBcnSem4nCSjX84KSTt9lX8zuXZ9A/edit?usp=sharing](https://docs.google.com/document/d/1HEiqleXe3tDimIrBcnSem4nCSjX84KSTt9lX8zuXZ9A/edit?usp=sharing)

# SSL (Shift Left Logical):

**Instrucciones:**  
\* Mnemónico: \`SLL\`  
\* Operadores: \`rs (registro zero), rt (registro fuente), rd (registro destino), aux (cuanto shift)\`  
\* Instrucción específica de prueba: \`SLL $zero, $t1, $t0, 2\` (Desplazar el contenido del registro \`$t1\` dos posiciones a la izquierda y almacenar el resultado en el registro \`$t0\`).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): \`00000\` (Tipo R)  
\* **rs** (bits 26-22): \`00000\` (Registro \`$zero\`, no utilizado en el cálculo)  
\* **rt** (bits 21-17): \`01011\` (Registro fuente \`$t1\` / Registro 11\)  
\* **rd** (bits 16-12): \`01010\` (Registro destino \`$t0\` / Registro 10\)  
\* **aux** (bits 11-7): \`00010\` (Valor inmediato 2, cantidad de desplazamientos)  
\* **X** (bit 6): \`0\` (Bit de control de formato)  
\* **func** (bits 5-0): \`000000\` (Código asignado a SLL)

**Combinación binaria:** \`0000 0000 0001 0110 1010 0001 0000 0000\`    
**Representación hexadecimal final:** \`0x0016A100\`

**Precondiciones:**  
\* El registro \`$t1\` (R11) debe ser cargado manualmente con el valor decimal \`5\`, que en hexadecimal equivale a \`0x00000005\`.  
\* El registro \`$t0\` (R10) debe inicializarse en \`0x00000000\` para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código**  
s\[0x00\] 0x0016A100

Registros antes del SSL

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000005

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

registros después del SSL

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000014   R\[11\]: 0x00000005

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SRL (Shift Right Logical)

**Instrucciones:**  
\* Mnemónico: \`SRL\`  
\* Operadores: \`rs (registro zero), rt (registro fuente), rd (registro destino), aux (cuanto shift)\`  
\* Instrucción específica de prueba: \`SRL $zero, $t1, $t0, 2\` (Desplazar el contenido del registro \`$t1\` dos posiciones a la derecha y almacenar el resultado en el registro \`$t0\`).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): \`00000\` (Tipo R)  
\* **rs** (bits 26-22): \`00000\` (Registro \`$zero\`, no utilizado en el cálculo)  
\* **rt** (bits 21-17): \`01010\` (Registro fuente \`$t1\` / Registro 11\)  
\* **rd** (bits 16-12): \`01001\` (Registro destino \`$t0\` / Registro 10\)  
\* **aux** (bits 11-7): \`00010\` (Valor inmediato 2, cantidad de desplazamientos)  
\* **X** (bit 6): \`0\` (Bit de control de formato)  
\* **func** (bits 5-0): \`000001\` (Código asignado a SRL)

**Combinación binaria:** \`0000 0000 0001 0100 1001 0001 0000 0001\`    
**Representación hexadecimal final:** \`0x00149101\`

**Aclaraciones:**  
	Esta prueba fue directamente después de la prueba de SSL por lo que cambiamos el origen al destino anterior y el destino a R\[9\], al ver R\[9\] y R\[11\] siendo iguales podemos concluir que funcionan correctamente ambas

**Precondiciones:**  
\* El registro \`$t1\` (R10) mantiene su valor, que en hexadecimal equivale a \`0x00000014\`.  
\* El registro \`$t0\` (R9) debe inicializarse en \`0x00000000\` para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

Registros Antes del SRL (iguales a después del SSL):

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000014   R\[11\]: 0x00000005

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SRL:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000005   R\[10\]: 0x00000014   R\[11\]: 0x00000005

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SRA (Shift Right Aritmetic)

**Instrucciones:**  
\* Mnemónico: SRA  
\* Operadores: rs (registro zero), rt (registro fuente), rd (registro destino), aux (cuanto shift)  
\* Instrucción específica de prueba: SRA $zero, $t1, $t0, 1 (Desplazar aritméticamente el contenido del registro $t1 una posición a la derecha y almacenar el resultado en el registro $t0).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00000 (Registro $zero, no utilizado en el cálculo)  
\* **rt** (bits 21-17): 01011 (Registro fuente $t1 / Registro 11\)  
\* **rd** (bits 16-12): 01010 (Registro destino $t0 / Registro 10\)  
\* **aux** (bits 11-7): 00001 (Valor inmediato 1, cantidad de desplazamientos)  
\* **X** (bit 6): 0 (Bit de control de formato)  
\* **func** (bits 5-0): 000010 (Código asignado a SRA)

**Combinación binaria:** \`0000 0000 0001 0110 1010 0000 1000 0010\`    
**Representación hexadecimal final:** \`0x0016A082\`

**Precondiciones:**  
\* El registro $t1 (R10) debe ser cargado previamente con un valor negativo (por ejemplo, \-4, que en hexadecimal equivale a 0xFFFFFFFC) para poder validar la correcta preservación y extensión del bit de signo.  
\* El registro $t0 (R12) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**  
s \[0x0C\] 0x0294C082

Registros Antes del SRA:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xFFFFFFFC   R\[11\]: 0x00000004

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros Después del SRA:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xFFFFFFFC   R\[11\]: 0x00000004

### R\[12\]: 0xFFFFFFFE   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SLLR (Shift Left Logical Register)

**Instrucciones:**  
\* Mnemónico: SLLR  
\* Operadores: rs (registro zero), rt (registro fuente), rd (registro destino), aux (cuanto shift)  
\* Instrucción específica de prueba: SLLR $t1, $t0, $t3, 0 (Desplazar lógicamente el contenido del registro $t0 la cantidad de posiciones indicada por el registro $t1 a la izquierda y almacenar el resultado en el registro $t3).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 01011 (Registro $t1/ Registro 11 \- Registro con la cantidad de desplazamientos)  
\* **rt** (bits 21-17): 01010 (Registro $t0/Registro 10 \- Registro con el valor base a desplazar)  
\* **rd** (bits 16-12): 01101 (Registro $t3/Registro 13 \- Registro destino del resultado)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 000011 (Código de función de SLLR)

**Combinación binaria:** \`0000 0010 1101 0100 1101 0000 0000 0011\`    
**Representación hexadecimal final:** \`0x02D4D003\`

**Precondiciones:**  
\* El registro $t0 (R10) debe ser cargado previamente con un valor patrón (por ejemplo, 0xFFFFFFFC) para poder verificar cómo se desplazan los bits hacia la izquierda y comprobar el llenado con ceros lógicos.  
\* El registro $t1 (R11) debe contener el valor con la cantidad de posiciones a desplazar (por ejemplo, 4), permitiendo validar que la ALU tome el desplazamiento de forma dinámica desde un registro fuente y no desde un campo inmediato fijo.  
\* El registro $t3 (R13) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**  
s \[0x08\] 0x02D4D003

Registros antes del SLLR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xFFFFFFFC   R\[11\]: 0x00000004

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SLLR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xFFFFFFFC   R\[11\]: 0x00000004

### R\[12\]: 0x00000000   R\[13\]: 0xFFFFFFC0   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SRLR (Shift Right Logical Register)

**Instrucciones:**  
\* Mnemónico: \`SLL\`  
\* Operadores: \`rs (registro zero), rt (registro fuente), rd (registro destino), aux (cuanto shift)\`  
\* Instrucción específica de prueba: \`SLL $zero, $t1, $t0, 2\` (Desplazar el contenido del registro \`$t1\` dos posiciones a la izquierda y almacenar el resultado en el registro \`$t0\`).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): \`00000\` (Tipo R)  
\* **rs** (bits 26-22): \`00000\` (Registro \`$zero\`, no utilizado en el cálculo)  
\* **rt** (bits 21-17): \`01011\` (Registro fuente \`$t1\` / Registro 11\)  
\* **rd** (bits 16-12): \`01010\` (Registro destino \`$t0\` / Registro 10\)  
\* **aux** (bits 11-7): \`00010\` (Valor inmediato 2, cantidad de desplazamientos)  
\* **X** (bit 6): \`0\` (Bit de control de formato)  
\* **func** (bits 5-0): \`000100\` (Código asignado a SRLR)

**Combinación binaria:** \`0000 0000 0001 0110 1010 0001 0000 0000\`    
**Representación hexadecimal final:** \`0x0016A100\`

**Precondiciones:**  
\* El registro \`$t1\` (R11) debe ser cargado manualmente con el valor decimal \`5\`, que en hexadecimal equivale a \`0x00000005\`.  
\* El registro \`$t0\` (R10) debe inicializarse en \`0x00000000\` para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

Entrada de Código  
s\[0x08\] 0x0016A100

Registros antes del SRLR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xFFFFFFFC   R\[11\]: 0x00000004

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SRLR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xFFFFFFFC   R\[11\]: 0x00000004

### R\[12\]: 0x00000000   R\[13\]: 0x0FFFFFFF   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SRAR (Shift Right Aritmetic Register)

**Instrucciones:**  
\* Mnemónico: SRAR  
\* Operadores: rs (registro con shift), rt (registro fuente), rd (registro destino), aux (no utilizado)  
\* Instrucción específica de prueba: SRAR $t1, $t0, $t3, 0 (Desplazar aritméticamente el contenido del registro $t0 la cantidad de posiciones indicada por el registro $t1 a la derecha y almacenar el resultado en el registro $t3).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 01011 (Registro $t1 / Registro 11 \- Registro con la cantidad de desplazamientos)  
\* **rt** (bits 21-17): 01010 (Registro $t0 / Registro 10 \- Registro con el valor base a desplazar)  
\* **rd** (bits 16-12): 01101 (Registro $t3 / Registro 13 \- Registro destino del resultado)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 000101 (Código asignado a SRAR)

**Combinación binaria:** 0000 0010 1101 0100 1101 0000 0000 0101  
**Representación hexadecimal final:** 0x02D4D005

**Precondiciones:**  
\* El registro $t0 (R10) debe ser cargado previamente con un valor negativo patrón (por ejemplo, \-4, que en hexadecimal equivale a 0xFFFFFFFC) para poder validar la correcta preservación y extensión del bit de signo al desplazar a la derecha.  
\* El registro $t1 (R11) debe contener el valor con la cantidad de posiciones a desplazar (por ejemplo, 4), permitiendo validar que la ALU tome el desplazamiento de forma dinámica desde un registro fuente y no desde un campo inmediato fijo.  
\* El registro $t3 (R13) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**  
s \[0x08\] 0x02D4D005

Registros antes del SRAR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xFFFFFFFC   R\[11\]: 0x00000004

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SRAR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xFFFFFFFC   R\[11\]: 0x00000004

### R\[12\]: 0x00000000   R\[13\]: 0xFFFFFFFF   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# CFS

# CTS

No funcionan

# AND 

**Instrucciones:**  
\* Mnemónico: AND  
\* Operadores: rs(origen del 1er argumento), rt(origen del 2do argumento) , rd (destino del resultado).  
\* Instrucción específica de prueba: AND $a0, $a1, $t0 (Hacer AND entre R\[4\] y R\[5\] y guardar el resultado en R\[10\]	).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er argumento)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do argumento)  
\* **rd** (bits 16-12): 01010 (Registro $t0 / Registro 10 \- Registro destino del resultado)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001000 (Código asignado a AND)

**Combinación binaria:** 0000 0001 0000 1010 1010 0000 0000 1000  
**Representación hexadecimal final:** 0x010AA008

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x0280025F.  
\* El registro $a1 (R5) fue cargado con el valor 0x0294A03F  
\* El registro $t0 (R10) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**  
s \[0x08\] 0x010AA008

Registros antes del AND:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x0280025F   R\[ 5\]: 0x0294A03F   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000014   R\[11\]: 0x00000005

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del AND:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x0280025F   R\[ 5\]: 0x0294A03F   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0280001F   R\[11\]: 0x00000005

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# OR 

**Instrucciones:**  
\* Mnemónico: OR  
\* Operadores: rs(origen del 1er argumento), rt(origen del 2do argumento) , rd (destino del resultado).  
\* Instrucción específica de prueba: OR $a0, $a1, $t1 (Hacer OR entre R\[4\] y R\[5\] y guardar el resultado en R\[10\]).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er argumento)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do argumento)  
\* **rd** (bits 16-12): 01011 (Registro $t1 / Registro 11 \- Registro destino del resultado)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001001 (Código asignado a OR)

**Combinación binaria:** 0000 0001 0000 1010 1011 0000 0000 1001  
**Representación hexadecimal final:** 0x010AB009

**Aclaraciones:**  
\* Fue hecho directamente después del AND por eso $t0 está con un valor guardado

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x0280025F.  
\* El registro $a1 (R5) fue cargado con el valor 0x0294A03F  
\* El registro $t1 (R11) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**  
s \[0x0C\] 0x010AB009

Registros antes del OR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x0280025F   R\[ 5\]: 0x0294A03F   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0280001F   R\[11\]: 0x0294A27F

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000005

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del OR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x0280025F   R\[ 5\]: 0x0294A03F   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0280001F   R\[11\]: 0x0294A27F

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# XOR 

**Instrucciones:**  
\* Mnemónico: XOR  
\* Operadores: rs(origen del 1er argumento), rt(origen del 2do argumento) , rd (destino del resultado).  
\* Instrucción específica de prueba: XOR $a0, $a1, $t2 (Hacer XOR entre R\[4\] y R\[5\] y guardar el resultado en R\[12\]	).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er argumento)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do argumento)  
\* **rd** (bits 16-12): 01100 (Registro $t2 / Registro 12 \- Registro destino del resultado)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001010 (Código asignado a XOR)

**Combinación binaria:** 0000 0001 0000 1010 1100 0000 0000 1010  
**Representación hexadecimal final:** 0x010AC00A

**Aclaraciones:**  
\* Fue hecho directamente después del OR por eso $t0 y $t1 está con un valor guardado

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x0280025F.  
\* El registro $a1 (R5) fue cargado con el valor 0x0294A03F  
\* El registro $t2 (R12) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**  
s \[0x10\] 0x010AC00A

Registros antes del XOR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x0280025F   R\[ 5\]: 0x0294A03F   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0280001F   R\[11\]: 0x0294A27F

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del XOR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x0280025F   R\[ 5\]: 0x0294A03F   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0280001F   R\[11\]: 0x0294A27F

### R\[12\]: 0x0014A260   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# NOR

**Instrucciones:**  
\* Mnemónico: NOR  
\* Operadores: rs(origen del 1er argumento), rt(origen del 2do argumento) , rd (destino del resultado).  
\* Instrucción específica de prueba: XOR $a0, $a1, $t3 (Hacer NOR entre R\[4\] y R\[5\] y guardar el resultado en R\[13\]	).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er argumento)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do argumento)  
\* **rd** (bits 16-12): 01101 (Registro $t3 / Registro 13 \- Registro destino del resultado)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001011 (Código asignado a NOR)

**Combinación binaria:** 0000 0001 0000 1010 1101 0000 0000 1011  
**Representación hexadecimal final:** 0x010AD00B

**Aclaraciones:**  
\* Fue hecho directamente después del XOR por eso $t0, $t1, $t2 está con un valor guardado

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x0280025F.  
\* El registro $a1 (R5) fue cargado con el valor 0x0294A03F  
\* El registro $t3 (R13) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**  
s \[0x14\] 0x010AD00B

Registros antes del NOR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x0280025F   R\[ 5\]: 0x0294A03F   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0280001F   R\[11\]: 0x0294A27F

### R\[12\]: 0x0014A260   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del NOR:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x0280025F   R\[ 5\]: 0x0294A03F   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0280001F   R\[11\]: 0x0294A27F

### R\[12\]: 0x0014A260   R\[13\]: 0xFD6B5D80   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SLT (Set Less Than) 

**Instrucciones:**  
\* Mnemónico: SLT  
\* Operadores: rs(origen del 1er argumento), rt(origen del 2do argumento) , rd (destino del resultado).  
\* Instrucción específica de prueba: SLT $a0, $a1, $t0 (Ver si R\[4\] es menor que R\[5\] y guardar 1 u 0 depende el resultado en R\[11\]	).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er argumento)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do argumento)  
\* **rd** (bits 16-12): 01010 (Registro $t0 / Registro 10 \- Registro destino del resultado)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001100 (Código asignado a SLT)

**Combinación binaria:** 0000 0001 0000 1010 1010 0000 0000 1100  
**Representación hexadecimal final:** 0x010AA00C

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0xFFFFFFFF  
\* El registro $a1 (R5) fue cargado con el valor 0x00000000  
\* El registro $t3 (R10) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**

Registros antes del SLT:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0xFFFFFFFF   R\[ 5\]: 0x00000001   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SLT:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0xFFFFFFFF   R\[ 5\]: 0x00000001   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000001   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SLTU (Set Less Than Unsigned)

**Instrucciones:**  
\* Mnemónico: SLTU  
\* Operadores: rs(origen del 1er argumento), rt(origen del 2do argumento) , rd (destino del resultado).  
\* Instrucción específica de prueba: SLTU $a0, $a1, $t1 (Ver si R\[4\] es menor que R\[5\] y guardar 1 u 0 depende el resultado en R\[11\]	).

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er argumento)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do argumento)  
\* **rd** (bits 16-12): 01011 (Registro $t1 / Registro 11 \- Registro destino del resultado)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001101 (Código asignado a SLT)

**Combinación binaria:** 0000 0001 0000 1010 1011 0000 0000 1101  
**Representación hexadecimal final:** 0x010AB00D

**Aclaraciones:**  
\* Fue hecho directamente después de SLT por eso $t0 ya tiene un valor cargado

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0xFFFFFFFF  
\* El registro $a1 (R5) fue cargado con el valor 0x00000000  
\* El registro $t1 (R11) debe inicializarse en 0x00000000 para asegurar que el cambio posterior sea producto de la instrucción y no un residuo de memoria.

**Entrada de Código:**

Registros antes del SLTU:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0xFFFFFFFF   R\[ 5\]: 0x00000001   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000001   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SLTU:

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0xFFFFFFFF   R\[ 5\]: 0x00000001   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000001   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# JR 

**Instrucciones:**  
\* Mnemónico: JR  
\* Operadores: rs(Registro de donde saco el valor que va a tomar PC).  
\* Instrucción específica de prueba: JR $t0 (Voy a hacer que PC tome el valor que esta guardado en $t0)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 01010 (Registro $t0 / Registro 1 \- Valor que va a tomar PC)  
\* **rt** (bits 21-17): 00000 (no se usa)  
\* **rd** (bits 16-12): 00000 (no se usa)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001110 (Código asignado a JR)

**Combinación binaria:** 0000 0010 1000 0000 0000 0000 0000 1110  
**Representación hexadecimal final:** 0x0280000E

**Precondiciones:**  
\* El registro $t0 (R10) fue cargado con el valor 0x0000000C

**Entrada de Código:** s \[0x00\] 0x0280000E

Registros antes del JR:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0000000C   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del JR:

### RTM32\>s PC 0

### Program Conuter (PC) set to 0x00000000

### RTM32\> s \[0x00\] 0280000E

### RTM32\>n

### Stepped instructions. Target PC: 0x0000000C

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0000000C   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# JALR

**Instrucciones:**  
\* Mnemónico: JALR  
\* Operadores: rs(Registro de donde saco el valor que va a tomar PC).  
\* Instrucción específica de prueba: JR $t0 $t1 (Voy guardar en $t1 el valor de PC \+ 4 y luego hacer que PC tome el valor que está guardado en $t0)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 01010 (Registro $t0 / Registro 10 \- Valor que va a tomar PC)  
\* **rt** (bits 21-17): 00000 (no se usa)  
\* **rd** (bits 16-12): 01011 (registro donde voy a guardar PC \+ 4\)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001111 (Código asignado a JALR)

**Combinación binaria:** 0000 0010 1000 0000 1011 0000 0000 1111  
**Representación hexadecimal final:** 0x0280B00F

**Precondiciones:**  
\* El registro $t0 (R10) fue cargado con el valor 0x0000FFFF  
\* El registro $t1 (R11) tiene 0x00000000 guardado  
\* PC fue seteado a 0x00000010

**Entrada de Código:** s \[0x10\] 0x0280B00F

Registros antes del JR:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0000FFFF   R\[11\]: 0x00000014

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del JR:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x0000FFFF   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

# LHX (Load Halfword Indexed)

\* Mnemónico: LHX  
\* Operadores: rs(registro del 1er valor), rt(registro destino), rd(registro del 2do valor).  
\* Instrucción específica de prueba: LHX $a0, $a1, $t0 (busco 2 bytes guardado en la dirección de memoria RAM \[$a0 \+ $t0\] y guardo ese byte en los dos bytes mas bajo de $a1 y relleno el resto con 1s o 0s según el valor en la memoria RAM es negativo o positivo respectivamente)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **rd** (bits 16-12): 01010 (Registro $t0 / Registro 10 \- 2do valor)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 010000 (Código asignado a LHX)

**Combinación binaria:** 0000 0001 0000 1010 1010 0000 0001 0000  
**Representación hexadecimal final:** 0x010AA010

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x00000020  
\* El registro $t0 (R5) fue cargado con el valor 0x00000004  
\* El registro $a1 (R10) tiene 0x00000000 guardado  
\* El valor de la memoria RAM en \[0x24\] es ABABABAB

**Entrada de Código:** s \[0x08\] 0x010AA010

Registros antes de LHX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después de LHX: 

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0xFFFFABAB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LHUX (Load Halfword Unsigned Indexed)

\* Mnemónico: LHUX  
\* Operadores: rs(registro del 1er valor), rt(registro destino), rd(registro del 2do valor).  
\* Instrucción específica de prueba: LHUX $a0, $a1, $t0 (busco 2 bytes guardado en la dirección de memoria RAM \[$a0 \+ $t0\] y guardo los 2 bytes en los dos bytes mas bajo de $a1 y relleno el resto con 0s)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **rd** (bits 16-12): 01010 (Registro $t0 / Registro 10 \- 2do valor)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 010001 (Código asignado a LHUX)

**Combinación binaria:** 0000 0001 0000 1010 1010 0000 0001 0001  
**Representación hexadecimal final:** 0x010AA011

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x00000020  
\* El registro $t0 (R5) fue cargado con el valor 0x00000004  
\* El registro $a1 (R10) tiene 0x00000000 guardado  
\* El valor de la memoria RAM en \[0x24\] es ABABABAB

**Entrada de Código:** s \[0x08\] 0x010AA011

Registros antes de LHUX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después de LHUX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0x0000ABAB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LBX (Load Byte Indexed)

\* Mnemónico: LBX  
\* Operadores: rs(registro del 1er valor), rt(registro destino), rd(registro del 2do valor).  
\* Instrucción específica de prueba: LBX $a0, $a1, $t0 (busco el byte guardado en la dirección de memoria RAM \[$a0 \+ $t0\] y guardo ese byte en el byte mas bajo de $a1 y relleno el resto con 1s o 0s según el valor en la memoria RAM es negativo o positivo respectivamente)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **rd** (bits 16-12): 01010 (Registro $t0 / Registro 10 \- 2do valor)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 010011 (Código asignado a LBX)

**Combinación binaria:** 0000 0001 0000 1010 1010 0000 0001 0011  
**Representación hexadecimal final:** 0x010AA012

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x00000020  
\* El registro $t0 (R5) fue cargado con el valor 0x00000004  
\* El registro $a1 (R10) tiene 0x00000000 guardado  
\* El valor de la memoria RAM en \[0x24\] es ABABABAB

**Entrada de Código:** s \[0x08\] 0x010AA012

Registros antes de LBX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después de LBX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0xFFFFFFAB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LBUX (Load Byte Unsigned Indexed)

**Instrucciones:**  
\* Mnemónico: LBUX  
\* Operadores: rs(registro del 1er valor), rt(registro destino), rd(registro del 2do valor).  
\* Instrucción específica de prueba: LBUX $a0, $a1, $t0 (busco el byte guardado en la dirección de memoria RAM \[$a0 \+ $t0\] y guardo ese byte en el byte mas bajo de $a1 y relleno el resto con 0s)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **rd** (bits 16-12): 01010 (Registro $t0 / Registro 10 \- 2do valor)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 010011 (Código asignado a LBUX)

**Combinación binaria:** 0000 0001 0000 1010 1010 0000 0001 0011  
**Representación hexadecimal final:** 0x010AA013

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x00000020  
\* El registro $t0 (R5) fue cargado con el valor 0x00000004  
\* El registro $a1 (R10) tiene 0x00000000 guardado  
\* El valor de la memoria RAM en \[0x24\] es ABABABAB

**Entrada de Código:** s \[0x08\] 0x010AA013

Registros antes de LBUX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después de LBUX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0x000000AB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LWX (Load Word Indexed)

\* Mnemónico: LWX  
\* Operadores: rs(registro del 1er valor), rt(registro destino), rd(registro del 2do valor).  
\* Instrucción específica de prueba: LWX $a0, $a1, $t0 (busco 4 bytes guardados en la dirección de memoria RAM \[$a0 \+ $t0\] y guardo los 4 bytes en $a1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **rd** (bits 16-12): 01010 (Registro $t0 / Registro 10 \- 2do valor)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 010100 (Código asignado a LWX)

**Combinación binaria:** 0000 0001 0000 1010 1010 0000 0001 0100  
**Representación hexadecimal final:** 0x010AA014

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con el valor 0x00000020  
\* El registro $t0 (R5) fue cargado con el valor 0x00000004  
\* El registro $a1 (R10) tiene 0x00000000 guardado  
\* El valor de la memoria RAM en \[0x24\] es ABABABAB

**Entrada de Código:** s \[0x08\] 0x010AA014

Registros antes de LWX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después de LWX:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000020   R\[ 5\]: 0xABABABAB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000004   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# MUL 

**Instrucciones:**  
\* Mnemónico: MUL  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: MUL $a0, $a1, $t0 (Multiplico $a0 por $a1 y guardo los 32 bits de menor valor en $t0)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do valor)  
\* **rd** (bits 16-12): 01010(Registro $t0 / Registro 10 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 010101 (Código asignado a MUL)

**Combinación binaria:** 0000 0001 0000 1010 1010 0000 0001 0101  
**Representación hexadecimal final:** 0x10AA015

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t0 (R10) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x08\] 0x10AA015

Registros antes de MUL:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del MUL:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

0x01234567 \* 0x89ABCDEF \= 0x9CA39DC94E4628

# MULH 

**Instrucciones:**  
\* Mnemónico: MULH  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: MULH $a0, $a1, $t1 (Multiplico $a0 por $a1 y guardo los 32 bits de mayor valor en $t1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do valor)  
\* **rd** (bits 16-12): 01011(Registro $t1 / Registro 11 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 010110 (Código asignado a MULH)

**Combinación binaria:** 0000 0001 0000 1010 1011 0000 0001 0110  
**Representación hexadecimal final:** 0x10AB016

**Aclaraciones:**  
\* Fue hecho directamente después de MUL por eso $t0 tiene un valor guardado y uso la dirección \[0x0C\] en vez de \[0x08\]

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t1 (R11) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x0C\] 0x10AB016

Registros antes de MULH:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del MULH:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# MULHU 

**Instrucciones:**  
\* Mnemónico: MULHU  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: MULHU $a0, $a1, $t2 (Multiplico $a0 por $a1 y guardo los 32 bits unsigned de mayor valor en $t2)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- 2do valor)  
\* **rd** (bits 16-12): 01100 (Registro $t2 / Registro 12 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 010111 (Código asignado a MULHU)

**Combinación binaria:** 0000 0001 0000 1010 1100 0000 0001 0111  
**Representación hexadecimal final:** 0x10AC017

**Aclaraciones:**  
\* Fue hecho directamente después de MULH por eso $t0 y $t1 tienen un valor guardado y uso la dirección \[0x10\] en vez de \[0x08\]

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t2 (R12) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x10\] 0x10AC017

Registros antes de MULHU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del MULHU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# DIV 

**Instrucciones:**  
\* Mnemónico: DIV  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: DIV $a1, $a0, $t3 (Divido $a1 entre $a0 y guardo el valor resultado en $t3)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00101 (Registro $a1 / Registro 5 \- 1er valor)  
\* **rt** (bits 21-17): 00100 (Registro $a0 / Registro 4 \- 2do valor)  
\* **rd** (bits 16-12): 01101 (Registro $t3 / Registro 13 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 011000 (Código asignado a DIV)

**Combinación binaria:** 0000 0001 0100 1000 1101 0000 0001 1000  
**Representación hexadecimal final:** 0x0148D018

**Aclaraciones:**  
\* Fue hecho directamente después de MULHU por eso $t0 y $t1 y $t2 tienen un valor guardado y uso la dirección \[0x14\] en vez de \[0x08\]

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t3 (R13) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x14\] 0x0148D018

Registros antes de DIV:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del DIV:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# DIVU 

**Instrucciones:**  
\* Mnemónico: DIVU  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: DIVU $a1, $a0, $t4 (Divido $a1 entre $a0 y guardo el valor resultado unsigned en $t4)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00101 (Registro $a1 / Registro 5 \- 1er valor)  
\* **rt** (bits 21-17): 00100 (Registro $a0 / Registro 4 \- 2do valor)  
\* **rd** (bits 16-12): 01110 (Registro $t4 / Registro 14 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 011001 (Código asignado a DIVU)

**Combinación binaria:** 0000 0001 0100 1000 1110 0000 0001 1001  
**Representación hexadecimal final:** 0x0148E019

**Aclaraciones:**  
\* Fue hecho directamente después de DIV por eso $t0 y $t1 y $t2 y $t3 tienen un valor guardado y uso la dirección \[0x18\] en vez de \[0x08\]

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t4 (R14) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x18\] 0x0148E019

Registros antes de DIVU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del DIVU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

# REST 

**Instrucciones:**  
\* Mnemónico: REST  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: REST $a1, $a0, $t5 (Divido $a1 entre $a0 y guardo el valor del resto en $t5)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00101 (Registro $a1 / Registro 5 \- 1er valor)  
\* **rt** (bits 21-17): 00100 (Registro $a0 / Registro 4 \- 2do valor)  
\* **rd** (bits 16-12): 01111 (Registro $t4 / Registro 15 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 011010 (Código asignado a REST)

**Combinación binaria:** 0000 0001 0100 1000 1111 0000 0001 1010  
**Representación hexadecimal final:** 0x0148F01A

**Aclaraciones:**  
\* Fue hecho directamente después de DIVU por eso $t0 y $t1 y $t2 y $t3 y $t4 tienen un valor guardado y uso la dirección \[0x1C\] en vez de \[0x08\]

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t5 (R15) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x1C\] 0x0148F01A

Registros antes de REST:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del REST:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0xFFFFFFC7

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# RESTU

**Instrucciones:**  
\* Mnemónico: RESTU  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: RESTU $a1, $a0, $t6 (Divido $a1 entre $a0 y guardo el valor del resto en $t6)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00101 (Registro $a1 / Registro 5 \- 1er valor)  
\* **rt** (bits 21-17): 00100 (Registro $a0 / Registro 4 \- 2do valor)  
\* **rd** (bits 16-12): 10000 (Registro $t6 / Registro 16 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 011011 (Código asignado a RESTU)

**Combinación binaria:** 0000 0001 0100 1001 0000 0000 0001 1011  
**Representación hexadecimal final:** 0x0149001B

**Aclaraciones:**  
\* Fue hecho directamente después de REST por eso $t0 y $t1 y $t2 y $t3 y $t4 y $t5 tienen un valor guardado y uso la dirección \[0x20\] en vez de \[0x08\]

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t6 (R16) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x20\] 0x0149001B

Registros antes de RESTU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0xFFFFFFC7

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del RESTU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0xFFFFFFC7

### R\[16\]: 0x00000040   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# ADD 

**Instrucciones:**  
\* Mnemónico: ADD  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: ADD $a1, $a0, $t7 (Suma $a1 con $a0 y guardo el valor en $t7)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00101 (Registro $a1 / Registro 5 \- 1er valor)  
\* **rt** (bits 21-17): 00100 (Registro $a0 / Registro 4 \- 2do valor)  
\* **rd** (bits 16-12): 10001 (Registro $t7 / Registro 17 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 011100 (Código asignado a ADD)

**Combinación binaria:** 0000 0001 0100 1001 0001 0000 0001 1100  
**Representación hexadecimal final:** 0x0149101C

**Aclaraciones:**  
\* Fue hecho directamente después de RESTU por eso $t0 y $t1 y $t2 y $t3 y $t4 y $t5 y $t6 tienen un valor guardado y uso la dirección \[0x24\] en vez de \[0x08\]

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t7 (R17) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x24\] 0x0149101C

Registros antes de ADD:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0xFFFFFFC7

### R\[16\]: 0x00000040   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del ADD:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0xFFFFFFC7

### R\[16\]: 0x00000040   R\[17\]: 0x8ACF1356   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### 

# SUB

**Instrucciones:**  
\* Mnemónico: SUB  
\* Operadores: rs(registro del 1er valor), rt(registro del 2do valor), rd(registro destino).  
\* Instrucción específica de prueba: SUB $a1, $a0, $t8 (Resto $a1 con $a0 y guardo el valor en $t8)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 00101 (Registro $a1 / Registro 5 \- 1er valor)  
\* **rt** (bits 21-17): 00100 (Registro $a0 / Registro 4 \- 2do valor)  
\* **rd** (bits 16-12): 10010 (Registro $t8 / Registro 18 \- registro destino)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 011101 (Código asignado a ADD)

**Combinación binaria:** 0000 0001 0100 1010 0001 0000 0001 1101  
**Representación hexadecimal final:** 0x0149201D

**Aclaraciones:**  
\* Fue hecho directamente después de ADD por eso $t0 y $t1 y $t2 y $t3 y $t4 y $t5 y $t6 y $t7 tienen un valor guardado y uso la dirección \[0x28\] en vez de \[0x08\]

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5)  fue cargado con 0x89ABCDEF  
\* El registro $t8 (R18) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x28\] 0x0149201D

Registros antes de SUB:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0xFFFFFFC7

### R\[16\]: 0x00000040   R\[17\]: 0x8ACF1356   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SUB:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x89ABCDEF   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0xC94E4629   R\[11\]: 0xFF795E36

### R\[12\]: 0x009CA39D   R\[13\]: 0xFFFFFF98   R\[14\]: 0x00000079   R\[15\]: 0xFFFFFFC7

### R\[16\]: 0x00000040   R\[17\]: 0x8ACF1356   R\[18\]: 0x88888888   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# TRAP  RFT 

# ADDI (ADD Immediate)

**Instrucciones:**  
\* Mnemónico: ADDI  
\* Operadores: rs (registro al que le sumo), rt (Registro destino) ,imm (cuanto sumo)  
\* Instrucción específica de prueba: ADDI $a0 $a1 0x00FF (le voy a sumar 0x000FF a $a0 y voy a guardar el resultado en $a1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00001 (Condigo asignado a ADDI)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 00000000011111111 (0x000FF)

**Combinación binaria:** 0000 1001 0000 1010 0000 0000 1111 1111  
**Representación hexadecimal final:** 0x090A00FF

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5) fue limpiado para que esté en 0x00000000

**Entrada de Código:** 

Registros antes de ADDI:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros despues del ADDI:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x01234666   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# J (Jump)

**Instrucciones:**  
\* Mnemónico: J  
\* Operadores: address (dirección de ram destino de la PC)  
\* Instrucción específica de prueba: J 0x00000020 (voy a hacer que la PC salte de donde está a 0x00000080)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00010 (Condigo asignado a J)  
\* **jump address** (bits 26-0): 000 0000 0000 0000 0000 0010 0000 (dirección de destino de la PC sin los dos bits mas bajos en 0\)

**Combinación binaria:** 0001 0000 0000 0000 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x10000020

**Entrada de Código:** s \[0x00\] 0x10000020

Registros antes de J: 

### \=== Control & Special Registers \===

### PC      : 0x00000000  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

Registros después de J:

### \=== Control & Special Registers \===

### PC      : 0x00000080  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

# JAL (Jump And Link)

**Instrucciones:**  
\* Mnemónico: JAL  
\* Operadores: address (dirección de ram destino de la PC)  
\* Instrucción específica de prueba: JAL 0x00000020 (voy a hacer que el valor de la PC se guarde en R31 y luego que la PC salte de donde está a 0x00000080)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00011 (Código asignado a JAL)  
\* **jump address** (bits 26-0): 000 0000 0000 0000 0000 0010 0000 (dirección de destino de la PC sin los dos bits más bajos en 0\)

**Combinación binaria:** 0001 1000 0000 0000 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x18000020

**Entrada de Código:** s \[0x00\] 0x18000020

Registros antes de JAR:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000000  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

Registros después de JAR:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000004

### 

### \=== Control & Special Registers \===

### PC      : 0x00000080  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

### 

### 

# ANDI/H 

**Instrucciones:**  
\* Mnemónico: ANDI/H  
\* Operadores: rs (con el que hago el AND), rt (Registro destino) , h (condición de H), imm (con que numero hago el AND)  
\* Instrucción específica de prueba: ANDI/H $a0 $a1 0 0x00FF (Hago and con la parte de arriba de $a0 y el imm, y guardo el resultado en $a1 y la parte de abajo la guardo con todos 0s)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00100 (Condigo asignado a ANDI/H)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **h** (bit 16\) 1 (Hago el AND con la parte de arriba (1) o de abajo (0))  
\* **imm** (bits 15-0): 0000000011111111 (0x00FF)

**Combinación binaria:** 0010 0001 0000 1011 0000 0000 1111 1111  
**Representación hexadecimal final:** 0x210B00FF

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x04\] 0x210B00FF

Registros antes de ANDI/H:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del ANDI/H

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x00230000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# ORI/H 

**Instrucciones:**  
\* Mnemónico: ORI/H  
\* Operadores: rs (con el que hago el OR), rt (Registro destino) , h (condición de H), imm (con que numero hago el OR)  
\* Instrucción específica de prueba: ORI/H $a0 $a1 0 0x00FF (Hago OR con la parte de arriba de $a0 y el imm, y guardo el resultado en $a1 y la parte de abajo la deja igual)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00101 (Condigo asignado a ORI/H)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **h** (bit 16\) 1 (Hago el AND con la parte de arriba (1) o de abajo (0))  
\* **imm** (bits 15-0): 0000000011111111 (0x00FF)

**Combinación binaria:** 0010 1001 0000 1011 0000 0000 1111 1111  
**Representación hexadecimal final:** 0x290B00FF

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x04\] 0x290B00FF

Registros antes de ORI/H:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del ORI/H

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x01FF4567   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# XORI/H

**Instrucciones:**  
\* Mnemónico: XORI/H  
\* Operadores: rs (con el que hago el XOR), rt (Registro destino) , h (condición de H), imm (con que numero hago el XOR)  
\* Instrucción específica de prueba: XORI/H $a0 $a1 0 0x00FF (Hago XOR con la parte de arriba de $a0 y el imm, y guardo el resultado en $a1 y la parte de abajo la deja igual)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00110 (Condigo asignado a XORI/H)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- 1er valor)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **h** (bit 16\) 1 (Hago el AND con la parte de arriba (1) o de abajo (0))  
\* **imm** (bits 15-0): 0000000011111111 (0x00FF)

**Combinación binaria:** 0011 0001 0000 1011 0000 0000 1111 1111  
**Representación hexadecimal final:** 0x310B00FF

**Precondiciones:**  
\* El registro $a0 (R4) fue cargado con 0x01234567  
\* El registro $a1 (R5) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x04\] 0x310B00FF

Registros antes de XORI/H:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del XORI/H

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x01234567   R\[ 5\]: 0x01DC4567   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LUI (Load Upper Immediate):

**Instrucciones:**  
\* Mnemónico: LUI  
\* Operadores: rt (Registro destino), imm (valor al que le aplico LUI)  
\* Instrucción específica de prueba: LUI $a0, 0x00FF (Voy a aplicarle LUI a imm y guardar el resultado en $a0)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00111 (Código asignado a LUI)  
\* **rs** (bits 26-22): 00000 (No se usa)  
\* **rt** (bits 21-17): 00100 (Registro $a0 / Registro 4 \- registro destino)  
\* **h** (bit 16\) 0 (no se usa)  
\* **imm** (bits 15-0): 0000000011111111 (0x00FF)

**Combinación binaria:** 0011 1000 0000 1000 0000 0000 1111 1111  
**Representación hexadecimal final:** 0x380800FF

**Precondiciones:**  
\* El registro $a0 (R4) fue limpiado para que esté en 0x00000000

**Entrada de Código:** s \[0x00\] 0x380800FF

Registros antes de LUI:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del LUI:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00FF0000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

# LW (Load Word)

**Instrucciones:**  
\* Mnemónico: LW  
\* Operadores: rs (desfase), rt (Registro destino), imm (posición de la RAM que busco)  
\* Instrucción específica de prueba: LW $zero, $a1 0x0020 (Voy a buscar lo que haya en la dirección de memoria RAM \[0x20\] con un desfase de 0 y lo que haya lo guardo en $a1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 01000 (Código asignado a LW)  
\* **rs** (bits 26-22): 00000 (Registro $zero / Registro 0 \- Desfase de memoria)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)

**Combinación binaria:** 0100 0000 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x400A0020

**Precondiciones:**  
\* Guardo en la posición \[0x20\] de la memoria 0x12345678

**Entrada de Código:** s \[0x00\] 0x400A0020

Registros antes del LW:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del LW:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SW (Store Word)

**Instrucciones:**  
\* Mnemónico: SW  
\* Operadores: rs (desfase), rt (Registro origen), imm (posición de la RAM en la que guardo)  
\* Instrucción específica de prueba: SW $zero, $a1 0x0024 (Voy a guardar en la dirección de memoria RAM \[0x20\] con un desfase de 0, lo que haya lo guardado en $a1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 01001 (Código asignado a SW)  
\* **rs** (bits 26-22): 00000 (Registro $zero / Registro 0 \- Desfase de memoria)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 0000000000100100 (0x0024)

**Combinación binaria:** 0100 1000 0000 1010 0000 0000 0010 0100  
**Representación hexadecimal final:** 0x480A0024

**Aclaraciones:**  
\* Voy a usar un LW de \[0x24\] a R4 para probar que cambio la memoria RAM

**Precondiciones:**  
\* Guardo en $a1 (R5) el valor 0x12345678

**Entrada de Código:** s \[0x00\] 0x480A0024

Registros antes del SW:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SW:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

# SH (Store HalfWord) 

**Instrucciones:**  
\* Mnemónico: SH  
\* Operadores: rs (desfase), rt (Registro origen), imm (posición de la RAM en la que guardo)  
\* Instrucción específica de prueba: SH $zero, $a1 0x0024 (Voy a guardar en la dirección de memoria RAM \[0x24\] con un desfase de 0, lo que haya lo guardado en $a1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 01010 (Código asignado a SH)  
\* **rs** (bits 26-22): 00000 (Registro $zero / Registro 0 \- Desfase de memoria)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 0000000000100100 (0x0024)

**Combinación binaria:** 0101 0000 0000 1010 0000 0000 0010 0100  
**Representación hexadecimal final:** 0x500A0024

**Aclaraciones:**  
\* Voy a usar un LW de \[0x24\] a R4 para probar que cambio la memoria RAM

**Precondiciones:**  
\* Guardo en $a1 (R5) el valor 0x12345678  
\* Seteo la memoria ram \[0x24\] en 0

**Entrada de Código:** s \[0x00\] 0x500A0024

Registros antes del SH:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SH:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00005678   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SB (Store Byte) 

**Instrucciones:**  
\* Mnemónico: SB  
\* Operadores: rs (desfase), rt (Registro origen), imm (posición de la RAM en la que guardo)  
\* Instrucción específica de prueba: SB $zero, $a1 0x0024 (Voy a guardar en la dirección de memoria RAM \[0x24\] con un desfase de 0, lo que haya lo guardado en $a1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 01011 (Código asignado a SB)  
\* **rs** (bits 26-22): 00000 (Registro $zero / Registro 0 \- Desfase de memoria)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 0000000000100100 (0x0024)

**Combinación binaria:** 0101 1000 0000 1010 0000 0000 0010 0100  
**Representación hexadecimal final:** 0x580A0024

**Aclaraciones:**  
\* Voy a usar un LW de \[0x24\] a R4 para probar que cambio la memoria RAM

**Precondiciones:**  
\* Guardo en $a1 (R5) el valor 0x12345678  
\* Seteo la memoria ram \[0x24\] en 0

**Entrada de Código:** s \[0x00\] 0x580A0024

Registros antes del SB:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del SB:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000078   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LH (Load HalfWord)

**Instrucciones:**  
\* Mnemónico: LH  
\* Operadores: rs (desfase), rt (Registro destino), imm (posición de la RAM que busco)  
\* Instrucción específica de prueba: LH $zero, $a1 0x0020 (Voy a buscar lo que haya en los primeros dos Bytes de la dirección de memoria RAM \[0x20\] con un desfase de 0 y lo que haya lo guardo en los Bits de menor valor de  $a1 y relleno el resto dependiendo la polaridad de lo guardado en la RAM)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 01100 (Código asignado a LH)  
\* **rs** (bits 26-22): 00000 (Registro $zero / Registro 0 \- Desfase de memoria)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)

**Combinación binaria:** 0110 0000 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x600A0020

**Precondiciones:**  
\* Guardo en la posición \[0x20\] de la memoria 0xABABABAB

**Entrada de Código:** s \[0x00\] 0x600A0020

Registros antes del LH:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del LH:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x0xFFFFABAB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LHU (Load HalfWord Unsigned)

**Instrucciones:**  
\* Mnemónico: LHU  
\* Operadores: rs (desfase), rt (Registro destino), imm (posición de la RAM que busco)  
\* Instrucción específica de prueba: LHU $zero, $a1 0x0020 (Voy a buscar lo que haya en los primeros dos Bytes de la dirección de memoria RAM \[0x20\] con un desfase de 0 y lo que haya lo guardo en los Bits de menor valor de  $a1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 01101 (Código asignado a LHU)  
\* **rs** (bits 26-22): 00000 (Registro $zero / Registro 0 \- Desfase de memoria)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)

**Combinación binaria:** 0110 1000 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x680A0020

**Precondiciones:**  
\* Guardo en la posición \[0x20\] de la memoria 0xABABABAB

**Entrada de Código:** s \[0x00\] 0x680A0020

Registros antes del LHU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del LHU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x0x0000ABAB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LB (Load Byte) 

\* Mnemónico: LB  
\* Operadores: rs (desfase), rt (Registro destino), imm (posición de la RAM que busco)  
\* Instrucción específica de prueba: LB $zero, $a1 0x0020 (Voy a buscar lo que haya en el primer Byte de la dirección de memoria RAM \[0x20\] con un desfase de 0 y lo que haya lo guardo en los Bits de menor valor de  $a1 y relleno el resto dependiendo la polaridad de lo guardado en la RAM)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 01110 (Código asignado a LB)  
\* **rs** (bits 26-22): 00000 (Registro $zero / Registro 0 \- Desfase de memoria)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)

**Combinación binaria:** 0111 0000 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x700A0020

**Precondiciones:**  
\* Guardo en la posición \[0x20\] de la memoria 0xABABABAB

**Entrada de Código:** s \[0x00\] 0x700A0020

Registros antes del LB:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del LB:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0xFFFFFFAB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# LBU (Load Byte Unsigned)

\* Mnemónico: LBU  
\* Operadores: rs (desfase), rt (Registro destino), imm (posición de la RAM que busco)  
\* Instrucción específica de prueba: LBU $zero, $a1 0x0020 (Voy a buscar lo que haya en el primer Byte de la dirección de memoria RAM \[0x20\] con un desfase de 0 y lo que haya lo guardo en los Bits de menor valor de  $a1)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 01111 (Código asignado a LBU)  
\* **rs** (bits 26-22): 00000 (Registro $zero / Registro 0 \- Desfase de memoria)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- registro destino)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)

**Combinación binaria:** 0111 1000 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x780A0020

**Precondiciones:**  
\* Guardo en la posición \[0x20\] de la memoria 0xABABABAB

**Entrada de Código:** s \[0x00\] 0x780A0020

Registros antes del LBU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del LBU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x000000AB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# BEQ (Branch if Equal)

\* Mnemónico: BEQ  
\* Operadores: rs (Registro 1), rt (Registro 2), imm (posición de Salto de la RAM \>\> 2\)  
\* Instrucción específica de prueba: BEQ $a0, $a1 0x0020 (me fijo si $a0 y $a1 contienen lo mismo y si es correcto la PC salta a 0x0080 \+ 4 (porque a imm se le hace \<\< 2 y después avanza una vez))

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 10000 (Código asignado a BEQ)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- Registro a comparar 1\)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- Registro a comparar 1\)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)	

**Combinación binaria:** 1000 0001 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x810A0020

**Precondiciones:**  
\* El registro $a0 fue cargado con 0x12345678  
\* El registro $a1 fue cargado con 0x12345678  
\* El PC fue seteado a 0

**Entrada de Código:** s \[0x00\] 0x810A0020

Registros antes del BEQ:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000000  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

Registros después del BEQ:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000084  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

# BNE (Branch if Not Equal)

\* Mnemónico: BNE  
\* Operadores: rs (Registro 1), rt (Registro 2), imm (posición de Salto de la RAM \>\> 2\)  
\* Instrucción específica de prueba: BNE $a0, $a1 0x0020 (me fijo si $a0 y $a1 contienen lo mismo y si es incorrecto la PC salta a 0x0080 \+ 4 (porque a imm se le hace \<\< 2 y después avanza una vez))

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 10001 (Código asignado a BNE)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- Registro a comparar 1\)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- Registro a comparar 1\)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)	

**Combinación binaria:** 1000 1001 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x890A0020

**Precondiciones:**  
\* El registro $a0 fue cargado con 0x12345678  
\* El registro $a1 fue cargado con 0x12345677  
\* El PC fue seteado a 0

**Entrada de Código:** s \[0x00\] 0x890A0020

Registros antes del BNE:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345677   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000000  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

Registros después del BEQ:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345677   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000084  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

# BLT (Branch if Less Than)

\* Mnemónico: BLT  
\* Operadores: rs (Registro 1), rt (Registro 2), imm (posición de Salto de la RAM \>\> 2\)  
\* Instrucción específica de prueba: BLT $a0, $a1 0x0020 (me fijo si lo que contiene $a0 es menor a lo que contiene  $a1 y si es correcto la PC salta a 0x0080 \+ 4 (porque a imm se le hace \<\< 2 y después avanza una vez))

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 10010 (Código asignado a BLT)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- Registro a comparar 1\)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- Registro a comparar 1\)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)	

**Combinación binaria:** 1001 0001 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x910A0020

**Precondiciones:**  
\* El registro $a1 fue cargado con 0x12345678  
\* El registro $a0 fue cargado con 0x12345677  
\* El PC fue seteado a 0

**Entrada de Código:** s \[0x00\] 0x910A0020

Registros antes del BLT:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345677   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000000  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

Registros después del BLT:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345677   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000084  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

# BGT (Branch if Greater Than)

\* Mnemónico: BGT  
\* Operadores: rs (Registro 1), rt (Registro 2), imm (posición de Salto de la RAM \>\> 2\)  
\* Instrucción específica de prueba: BGT $a0, $a1 0x0020 (me fijo si lo que contiene $a0 es mayor a lo que contiene  $a1 y si es correcto la PC salta a 0x0080 \+ 4 (porque a imm se le hace \<\< 2 y después avanza una vez))

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 10011 (Código asignado a BGT)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- Registro a comparar 1\)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- Registro a comparar 1\)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)	

**Combinación binaria:** 1001 1001 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0x990A0020

**Precondiciones:**  
\* El registro $a0 fue cargado con 0x12345678  
\* El registro $a1 fue cargado con 0x12345677  
\* El PC fue seteado a 0

**Entrada de Código:** s \[0x00\] 0x990A0020

Registros antes del BGT:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345677   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000000  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

Registros después del BGT:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345677   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000084  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

# BLE (Branch if Less or Equal)

\* Mnemónico: BLE  
\* Operadores: rs (Registro 1), rt (Registro 2), imm (posición de Salto de la RAM \>\> 2\)  
\* Instrucción específica de prueba: BLE $a0, $a1 0x0020 (me fijo si lo que contiene $a0 es menor o igual a lo que contiene  $a1 y si es correcto la PC salta a 0x0080 \+ 4 (porque a imm se le hace \<\< 2 y después avanza una vez))

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 10100 (Código asignado a BLE)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- Registro a comparar 1\)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- Registro a comparar 1\)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)	

**Combinación binaria:** 1010 0001 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0xA10A0020

**Precondiciones:**  
\* El registro $a1 fue cargado con 0x12345678  
\* El registro $a0 fue cargado con 0x12345677  
\* El PC fue seteado a 0

**Entrada de Código:** s \[0x00\] 0xA10A0020

Registros antes del BLE:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345677   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000000  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

Registros después del BLE:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345677   R\[ 5\]: 0x12345678   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000084  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

# BGE (Branch if Grater or Equal)

\* Mnemónico: BGE  
\* Operadores: rs (Registro 1), rt (Registro 2), imm (posición de Salto de la RAM \>\> 2\)  
\* Instrucción específica de prueba: BGE $a0, $a1 0x0020 (me fijo si lo que contiene $a0 es mayor o igual a lo que contiene  $a1 y si es correcto la PC salta a 0x0080 \+ 4 (porque a imm se le hace \<\< 2 y después avanza una vez))

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 10101 (Código asignado a BGE)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- Registro a comparar 1\)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- Registro a comparar 1\)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)	

**Combinación binaria:** 1010 1001 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0xA90A0020

**Precondiciones:**  
\* El registro $a0 fue cargado con 0x12345678  
\* El registro $a1 fue cargado con 0x12345677  
\* El PC fue seteado a 0

**Entrada de Código:** s \[0x00\] 0xA90A0020

Registros antes del BGE:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345677   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000000  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

Registros después del BGE:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0x12345678   R\[ 5\]: 0x12345677   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

### 

### \=== Control & Special Registers \===

### PC      : 0x00000084  CAUSE   : 0x00000000  EPC     : 0x00000000

### BADVADR : 0x00000000  VBR     : 0xF0000000

# SLTI (Set Less Than Immediate)

\* Mnemónico: SLTI  
\* Operadores: rs (Registro a comparar), rt (Registro destino), imm (variable a comparar)  
\* Instrucción específica de prueba: SLTI $a0, $a1 0x0020 (me fijo si imm tiene un valor mayor al que está guardado en $a0, guardo 1 en $a1 en caso correcto, guardo 0 si no)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 10110 (Código asignado a SLTI)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- Registro a comparar)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- Registro destino)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)	

**Combinación binaria:** 1011 0001 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0xB10A0020

**Precondiciones:**  
\* El registro $a0 fue cargado con 0xFFFFFFFF  
\* El registro $a1 fue limpiada y cargada con 0x00000000  
\* El PC fue seteado a 0

**Entrada de Código:** s \[0x00\] 0xA90A0020

Registros antes del STLI:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0xFFFFFFFF   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del STLI:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0xFFFFFFFF   R\[ 5\]: 0x00000001   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

# SLTIU (Set Less Than Immediate Unsigned)

\* Mnemónico: SLTIU  
\* Operadores: rs (Registro a comparar), rt (Registro destino), imm (variable a comparar)  
\* Instrucción específica de prueba: SLTI $a0, $a1 0x0020 (me fijo si imm tiene un valor mayor al que está guardado en $a0, guardo 1 en $a1 en caso correcto, guardo 0 si no pero unsigned)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 10111 (Código asignado a SLTI)  
\* **rs** (bits 26-22): 00100 (Registro $a0 / Registro 4 \- Registro a comparar)  
\* **rt** (bits 21-17): 00101 (Registro $a1 / Registro 5 \- Registro destino)  
\* **imm** (bits 16-0): 0000000000100000 (0x0020)	

**Combinación binaria:** 1011 1001 0000 1010 0000 0000 0010 0000  
**Representación hexadecimal final:** 0xB90A0020

**Precondiciones:**  
\* El registro $a0 fue cargado con 0xFFFFFFFF  
\* El registro $a1 fue limpiada y cargada con 0x00000001  
\* El PC fue seteado a 0

**Entrada de Código:** s \[0x00\] 0xB90A0020

Registros antes del STLIU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0xFFFFFFFF   R\[ 5\]: 0x00000001   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

Registros después del STLIU:

### RTM32\> r

### \=== General Purpose Registers \===

### R\[ 0\]: 0x00000000   R\[ 1\]: 0x00000000   R\[ 2\]: 0x00000000   R\[ 3\]: 0x00000000

### R\[ 4\]: 0xFFFFFFFF   R\[ 5\]: 0x00000000   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

