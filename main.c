#include <stdio.h>
#include <stdlib.h>

typedef struct cpu {
    unsigned int pc;
    unsigned int psw;
    unsigned int regs[16];
    unsigned char data_memory [65536];
    unsigned int program_memory [65536];
}cpu;



int main (){

    cpu estado = {0}; //  inicia todos los miembros de la struct en 0 
    int flag = 1;
    while (flag){
        
        unsigned int instruccion = estado.program_memory[estado.pc];
        switch (instruccion & 0b1111) {
            case 0: //add
                unsigned int guardar = (instruccion >> 4) & 0b1111;
                unsigned int v1 = (instruccion >> 8) & 0b1111;
                unsigned int v2 = (instruccion >> 12) & 0b1111;
                estado.regs[guardar] = estado.regs[v1] + estado.regs[v2];
                break;
            case 1: //
                break;
                
            case 2: 
                unsigned int guardar = (instruccion >> 4) & 0b1111;
                unsigned int lectura = (instruccion >> 8) & 0b1111;
                unsigned int offset = (instruccion >> 12) & 0b11111111;
                estado.regs[guardar] = estado.data_memory[estado.regs[lectura] + offset] + (estado.data_memory[estado.regs[lectura] + offset + 1] << 8);
                break;

            case 3:
                unsigned int guardar = (instruccion >> 4) & 0b1111;
                unsigned int lectura = (instruccion >> 8) & 0b1111;
                unsigned int offset = (instruccion >> 12) & 0b11111111;
                estado.data_memory[estado.regs[lectura] + offset] = estado.regs[guardar] & 0b11111111;
                estado.data_memory[estado.regs[lectura] + offset + 1] = (estado.regs[guardar] >> 8) & 0b11111111;
                break;
                
            case 4: //beq
                unsigned int v1 = (instruccion >> 4) & 0b1111;
                unsigned int v2 = (instruccion >> 8) & 0b1111;
                unsigned int offset = (instruccion >> 12) & 0b11111111;
                if (estado.regs[v1] == estado.regs[v2]) {
                    estado.pc += (offset << 24) >> 24;
                }
                break;
            case 14: //j
                unsigned int offset = (instruccion >> 4);
                estado.pc = offset;
                break;
            default:
                break;
        }

    }
}