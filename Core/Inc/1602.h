/*
 * 1602.h
 *
 *  Created on: Nov 10, 2024
 *      Author: mehmed-damak
 */

#ifndef INC_1602_H_
#define INC_1602_H_

void setpins(int rs,int d7, int d6, int d5, int d4, int d3, int d2, int d1, int d0);
void lcdinit();
void lcdprint(char *str);

#endif /* INC_1602_H_ */
