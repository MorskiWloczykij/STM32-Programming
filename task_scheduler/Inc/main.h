/*
 * main.h
 *
 *  Created on: 27 lut 2024
 *      Author: ep18810
 */

#ifndef MAIN_H_
#define MAIN_H_

#define MAX_TASKS 4

/* some stack memory calculations */
#define SIZE_TASK_STACK 	1024U //1kB
#define SIZE_SCHED_STACK	1024U

#define SRAM_START			0x20000000U	//start of memory address, taken from datasheet
#define SIZE_SRAM			((128) * (1024)) //size of RAM sections (128kB)
#define SRAM_END			((SRAM_START) + (SIZE_SRAM))

#define T1_STACK_START		SRAM_END //address of first task stack
#define T2_STACK_START		((SRAM_END) - (SIZE_TASK_STACK)) //address of second task stack
#define T3_STACK_START		((SRAM_END) - (2 * SIZE_TASK_STACK)) //address of third task stack
#define T4_STACK_START		((SRAM_END) - (3 * SIZE_TASK_STACK)) //address of fourth task stack

#define SCHED_STACK_START	((SRAM_END) - (4 * SIZE_TASK_STACK))  //address of scheduler stack

#define TICK_HZ 1000U

#define HSI_CLK				16000000U
#define SYSTICK_TIM_CLK		HSI_CLK

#define DUMMY_XPSR 0x01000000U

#endif /* MAIN_H_ */
