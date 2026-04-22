/*
 * capteur.c
 *
 *  Created on: Apr 2, 2026
 *      Author: elise
 */

#include <light.h>
#include "main.h"
//definition couleur
//loop :
//si bouton couleur ==> on change la couleur

//==> si le capteur recoit qqc > seuil :
//on envoit une donnee à la neopixel


int COULEUR = 0 ; //entier de 0 à 5 pour définir la couleur.
int red = 0;
int green = 0;
int blue = 0;

#define NUMBER_OF_LEDS 1
#define TOTAL_DATA_LENGTH (NUMBER_OF_LEDS * 24 +1)

extern TIM_HandleTypeDef htim16;

uint16_t neopixel_data[TOTAL_DATA_LENGTH];

void neopixel_set_color(uint8_t r, uint8_t g, uint_t b){
	uint32_t color = (g<<16)|(r<<8)|b;
	for (int i =0; i<24 ; i++){
		if (color & (1<<(23-i))){
			neopixel_data[i]=13;
		}
		else {
			neopixel_data[i]=6;
		}
	}
	neopixel_data[24]=0;
	HAL_TIM_PWM_Start_DMA(&htim16, TIM_CHANNEL_1,(uint32_t*)neopixel_data, TOTAL_DATA_LENGTH);
}

void changement_couleur (void){
	switch (COULEUR) {
		case 0:
			red = 255;
			green = 0;
			blue = 0;
			break; //rouge
		case 1:
			red = 128;
			green = 128;
			blue = 0;
			break; //jaune
		case 2:
			red = 0;
			green = 255;
			blue = 0;
			break; // vert
		case 3:
			red = 0;
			green = 128;
			blue = 128;
			break; //cyan
		case 4:
			red = 0;
			green = 0;
			blue = 255;
			break; //bleu
		case 5:
			red = 128;
			green = 0;
			blue = 128;
			break; //magenta
		}
}

void handle_button(void){
	static uint8_t last_state = 1 ;
	uint8_t current = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0);
	if (last_state == 1 && current == 0){
		COULEUR++;
		if (COULEUR>5){
			COULEUR = 0 ;
		}
	}
	last_state = current ;
}




