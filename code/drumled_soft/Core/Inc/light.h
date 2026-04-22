/*
 * capteur.h
 *
 *  Created on: Apr 2, 2026
 *      Author: elise
 */

#ifndef INC_LIGHT_H_
#define INC_LIGHT_H_

extern int COULEUR ;
extern int red ;
extern int green ;
extern int blue ;
void neopixel_set_color(uint8_t r, uint8_t g, uint_t b);
void changement_couleur(void);
void handle_button(void);


#endif /* INC_LIGHT_H_ */
