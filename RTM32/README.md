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

**NO FUNCIONA**

**Instrucciones:**  
\* Mnemónico: JALR  
\* Operadores: rs(Registro de donde saco el valor que va a tomar PC).  
\* Instrucción específica de prueba: JR $t0 (Voy guardar en R\[31\] el valor de PC \+ 4 y luego hacer que PC tome el valor que está guardado en $t0)

**Decodificación a Lenguaje de Máquina (Hexadecimal):**  
\* **opcode** (bits 31-27): 00000 (Tipo R)  
\* **rs** (bits 26-22): 01010 (Registro $t0 / Registro 1 \- Valor que va a tomar PC)  
\* **rt** (bits 21-17): 00000 (no se usa)  
\* **rd** (bits 16-12): 01011 (no se usa)  
\* **aux** (bits 11-7): 00000 (No se utiliza en este formato)  
\* **X** (bit 6): 0  
\* **func** (bits 5-0): 001111 (Código asignado a JALR)

**Combinación binaria:** 0000 0010 1000 0000 1011 0000 0000 1111  
**Representación hexadecimal final:** 0x0280B00A

**Precondiciones:**  
\* El registro $t0 (R10) fue cargado con el valor 0x0000000C  
\* El registro $ra (R31) tiene 0x00000000 guardado

**Entrada de Código:** s \[0x00\] 0x0280000A

Registros antes del JR:  
![][image1]  
Registros después del JR:

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

no funciona (si funciona pero tengo que preguntarle al profe o Mate)   
No se cuando corresponden todos 0s o todos 1s skibidi toilechi

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

creo va puede que si porque 8 sería 1000 lo que lo haría negativo anashei buenadox  
no funciona  
0x01234567 \* 0x89ABCDEF \= 0x9CA39DC94E4628

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

creo va puede que si porque 8 sería 1000 lo que lo haría negativo anashei buenadox  
no funciona  
0x01234567 \* 0x89ABCDEF \= 0x9CA39DC94E4628

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

**Entrada de Código:** 3

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

### R\[ 4\]: 0x00000000   R\[ 5\]: 0x000000AB   R\[ 6\]: 0x00000000   R\[ 7\]: 0x00000000

### R\[ 8\]: 0x00000000   R\[ 9\]: 0x00000000   R\[10\]: 0x00000000   R\[11\]: 0x00000000

### R\[12\]: 0x00000000   R\[13\]: 0x00000000   R\[14\]: 0x00000000   R\[15\]: 0x00000000

### R\[16\]: 0x00000000   R\[17\]: 0x00000000   R\[18\]: 0x00000000   R\[19\]: 0x00000000

### R\[20\]: 0x00000000   R\[21\]: 0x00000000   R\[22\]: 0x00000000   R\[23\]: 0x00000000

### R\[24\]: 0x00000000   R\[25\]: 0x00000000   R\[26\]: 0x00000000   R\[27\]: 0x00000000

### R\[28\]: 0x00000000   R\[29\]: 0x00000000   R\[30\]: 0x00000000   R\[31\]: 0x00000000

[image1]: <data:image/png;base64,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>