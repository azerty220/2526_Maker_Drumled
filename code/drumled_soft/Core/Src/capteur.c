/*
 * capteur.c
 *
 *  Created on: Apr 2, 2026
 *      Author: elise
 */

#include "capteur.h"
#include "main.h"
//definition couleur
//loop :
//si bouton couleur ==> on change la couleur

//==> si le capteur recoit qqc > seuil :
//on envoit une donnee à la neopixel


int COULEUR = 0 ; //entier de 0 à 5 pour définir la couleur.

int changement_couleur(){
	if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)==0){
		if (COULEUR == 5){
			COULEUR = 0 ;
		}
	else {
		COULEUR = COULEUR + 1 ;
		}
	}
}


void couleur (void){
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

