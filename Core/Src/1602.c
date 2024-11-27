#include "stm32f0xx_hal.h"
const char letters[38] = {

        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', // ASCII codes for '0' to '9'

        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', // ASCII codes for 'A' to 'J'

        'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', // ASCII codes for 'K' to 'T'

        'U', 'V', 'W', 'X', 'Y', 'Z', '-', ' '                      // ASCII codes for 'U' to 'Z'

    };//retefads

const int ascii[38][8] = {
	    {0, 0, 1, 1, 0, 0, 0, 0}, // '0' (48)

	    {0, 0, 1, 1, 0, 0, 0, 1}, // '1' (49)

	    {0, 0, 1, 1, 0, 1, 0, 0}, // '2' (50)

	    {0, 0, 1, 1, 0, 1, 0, 1}, // '3' (51)

	    {0, 0, 1, 1, 1, 0, 0, 0}, // '4' (52)

	    {0, 0, 1, 1, 1, 0, 0, 1}, // '5' (53)

	    {0, 0, 1, 1, 1, 1, 0, 0}, // '6' (54)

	    {0, 0, 1, 1, 1, 1, 0, 1}, // '7' (55)

	    {0, 1, 1, 1, 0, 0, 0, 0}, // '8' (56)

	    {0, 1, 1, 1, 0, 0, 0, 1}, // '9' (57)

	    {0, 1, 0, 0, 0, 0, 0, 1}, // 'A' (65)

	    {0, 1, 0, 0, 0, 0, 1, 0}, // 'B' (66)

	    {0, 1, 0, 0, 0, 0, 1, 1}, // 'C' (67)

	    {0, 1, 0, 0, 0, 1, 0, 0}, // 'D' (68)

	    {0, 1, 0, 0, 0, 1, 0, 1}, // 'E' (69)

	    {0, 1, 0, 0, 0, 1, 1, 0}, // 'F' (70)

	    {0, 1, 0, 0, 0, 1, 1, 1}, // 'G' (71)

	    {0,1,0,0,1,0,0,0}, // 'H' (72)

	    {0,1,0,0,1,0,0,1}, // 'I' (73)

	    {0,1,0,0,1,0,1,0}, // 'J' (74)

	    {0,1,0,0,1,0,1,1}, // 'K' (75)

	    {0,1,0,0,1,1,0,0}, // 'L' (76)

	    {0,1,0,0,1,1,0,1}, // 'M' (77)

	    {0,1,0,0,1,1,1,0}, // 'N' (78)

	    {0,1,0,0,1,1,1,1}, // 'O' (79)

	    {0,1,0,1,0,0,0,0}, // 'P' (80)

	    {0,1,0,1,0,0,0,1}, // 'Q' (81)

	    {0,1,0,1,0,0,1,0}, // 'R' (82)


    {0,1,0,1,0,0,1,1}, // 'S' (83)
    {0,1,0,1,0,1,0,0}, // 'T' (84)
    {0,1,0,1,0,1,0,1}, // 'U' (85)
    {0,1,0,1,0,1,1,0}, // 'V' (86)
    {0,1,0,1,0,1,1,1}, // 'W' (87)
    {0,1,0,1,1,0,0,0}, // 'X' (88)
    {0,1,0,1,1,0,0,1}, // 'Y' (89)
    {0,1,0,1,1,0,1,0},// 'Z' (90)
	{1,0,1,1,0,0,0,0}, //-
	{0,0,1,0,0,0,0,0} // ' '
};

void setpins(int rs,int d7, int d6, int d5, int d4, int d3, int d2, int d1, int d0){
	if(rs==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_RESET);
	}
	/*
	if(rw==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);
	}
	*/
	if(d0==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
	}
	if(d1==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET);
	}
	if(d2==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_RESET);
	}
	if(d3==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET);
	}

	if(d4==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
	}

	if(d5==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);
	}

	if(d6==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);
	}

	if(d7==1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET);
	}

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);



}
void lcdinit(){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_RESET);

	setpins(0, 0,0,1,1,0,0,0,0);//8bit init
	setpins(0, 0,0,0,0,0,0,0,1);//clear display
	setpins(0, 0,0,0,0,0,0,1,0);//Return Home
	setpins(0, 0,0,0,0,1,1,0,0);//Dislay ON, No cursor

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
}
void lcdprint(char *str){
	for(int i=0;str[i]!='\0';i++){
		for(int j=0;j<38;j++){
			if(str[i]==letters[j]){
				setpins(1,ascii[j][0],ascii[j][1],ascii[j][2],ascii[j][3],ascii[j][4],ascii[j][5],ascii[j][6],ascii[j][7]);
			}
		}
	}
}
